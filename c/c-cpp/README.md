### 

##### To compile the c++ files
`g++ -c myclass.cc -o myclass.o`

##### To compile the wrappers...
`g++ -c mywrapper.cc -o mywrapper.o`

###### Finally to compile the program itself...
`gcc -c main.c -o main.o`

Finally we link the program... The linking needs to be done with a C++ compiler

`g++ main.o mywrapper.o myclass.o -o output`

