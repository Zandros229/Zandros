a.out: testbib.o
	c++ -Wall -pedantic -g testbib.o
testbib.o: testbib.cpp map_template.o biblioteka.o
	c++ -Wall -pedantic -g testbib.cpp -c
map_template.o: map_template.h
	c++ -Wall -pedantic -g map_template.h -c
biblioteka.o: biblioteka.h
	c++ -Wall -pedantic -g biblioteka.h -c

clear:
	rm a.out testbib.os

