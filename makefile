all: Seq.exe

Seq.exe: Seq.o Driver.o
	g++ Seq.o  Driver.o -o Seq.exe

Seq.o: Seq.cpp
	g++ -c  Seq.cpp

Driver.o: Driver.cpp
	g++  -c  Driver.cpp

clean:
	rm -f *.o Seq.exe

