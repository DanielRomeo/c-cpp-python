output: main.o  message.o
	g++ main.o message.o -o output

main.o: main.cpp
	g++ -c main.cpp

message.o: message.cpp
	g++ -c message.cpp

clean:
	rm *.o output