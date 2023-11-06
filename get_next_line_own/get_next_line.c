/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 07:07:56 by rmessner          #+#    #+#             */
/*   Updated: 2023/11/06 12:29:35 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// #define BUFFER_SIZE 1000

char *get_next_line(int fd)
{
    static char buffer[BUFFER_SIZE];
    static size_t bytes_read = 0;
    static size_t current_position = 0;

    char *line;
    size_t total_bytes = 0;

    line = (char *)malloc(BUFFER_SIZE);

    if (line == NULL)
        return (NULL);

    while (1)
    {
        if (current_position == bytes_read)
        {
            // Wenn wir das Ende des Puffers erreicht haben, lesen wir erneut von der Datei
            bytes_read = read(fd, buffer, BUFFER_SIZE);
            current_position = 0;

            if (bytes_read <= 0)
            {
                // Wenn das Lesen abgeschlossen ist oder ein Fehler auftritt, beenden wir die Schleife
                line[total_bytes] = '\0'; // Zeilenende setzen
                return (total_bytes > 0 ? line : NULL); // NULL zurückgeben, wenn keine Zeilen mehr vorhanden sind
            }
        }

        char current_char = buffer[current_position++];
        
        if (current_char == '\n')
        {
            line[total_bytes] = '\0'; // Zeilenende setzen
            return line;
        }

        line[total_bytes++] = current_char; // Zeichen in den Zeilenpuffer schreiben
    }
}


int main()
{
    int fd1;
    
    fd1 = open("Test1.txt", O_RDONLY);

    char *line;
    while ((line = get_next_line(fd1)) != NULL)
    {
        if (line[0] == '\0')
        {
            free(line);
            break;
        }
        print_str(line);
        free(line);
    }

    close(fd1);

    return 0;
}