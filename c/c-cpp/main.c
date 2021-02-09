#include "mywrapper.h"
#include <stdio.h>
#include <stdlib.h>

/*after all compilation we are ready to use the code/wrapper*/

int main(){
	
	struct MyClass* c = newMyClass(); // instatiation
	MyClass_int_set(c, 3); // method
	printf("%i\n", MyClass_int_get(c)); // method
	deleteMyClass(c); // deconstruction

	return 0;
}