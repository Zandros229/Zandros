a.out: testmap.o
	c++ -Wall -pedantic testmap.o
testmap.o: testmap.cpp map_template.o employee.o
	c++ -Wall -pedantic testmap.cpp -c
map_template.o: map_template.h
	c++ -Wall -pedantic map_template.h -c
employee.o: employee.h
	c++ -Wall -pedantic employee.h -c

clear:
	rm a.out testmap.os

