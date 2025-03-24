CXX=g++

all: booking_system

booking_system: main.o nairi_teather.o yerevan_teather.o ararat_teather.o
	g++ -std=c++17 -o booking_system main.o nairi_teather.o yerevan_teather.o ararat_teather.o

nairi_teather.o: nairi_teather.cpp nairi_teather.h
	g++ -std=c++17 -c nairi_teather.cpp

yerevan_teather.o: yerevan_teather.cpp yerevan_teather.h
	g++ -std=c++17 -c yerevan_teather.cpp

ararat_teather.o: ararat_teather.cpp ararat_teather.h
	g++ -std=c++17 -c ararat_teather.cpp

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

clean:
	rm *.o booking_system
