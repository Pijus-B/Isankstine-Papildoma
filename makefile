main: fun.o
	g++ -o main -O2 main.cpp fun.o
fun:
	g++ -c fun.cpp
clean:
	del *.o main