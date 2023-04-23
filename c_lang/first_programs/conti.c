  #include <stdio.h>
  
/*Continue vs Brake*/

  int     main()  {
              int a;		

              for(a = 0; a < 10; a++) {
             	if(a == 5)	{		//if vor der (for-printf) funktion gibt0 "Panic-Wert" nicht aus
					printf("Panic!\n");
					continue;    //lässt danach die schleife weiterlaufen
					//oder brake damit ab hier die schleife aufhört
				}
				printf("a ist %d\n", a);
              } 
			printf("Phew");
              return 0;
    }           
