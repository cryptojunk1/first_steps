#!/bin/bash
cities=("Hong_Kong" "San_Fernando" "Napoli")
> codecademy_projects/tempertures.txt

for city in ${cities[@]}
do
	sleep 1
	./codecademy_projects/scripts/weather.sh -s $city | sed 's/+//' >> codecademy_projects/tempertures.txt
done

sort -k2 -h -r codecademy_projects/tempertures.txt > codecademy_projects/sorted_tempertures.txt

