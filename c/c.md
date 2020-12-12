### 

#### Arrays
```c

```


#### Data types
```c
    // get a char(string) and display it:
    char name[10];
	printf("Enter your name \n");
	fgets(name, 10, stdin); // this is a way of getting a strng input from a user, second param is the max length
	printf("Hello %s! \n", name);

	// get user's number and display it:
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Your age is: %d" \n, age);

	// get and display a charector
	char charector;
	printf("Enter your char: ");
	scanf("%c", &charector);
	printf("Your char is: %c \n", charector);

	// get and display a double
	double mydouble;
	printf("Enter your double: ");
	scanf("%lf", &mydouble); // to get the value we use %lf
	printf("Your char is: %f \n", mydouble); // to display the value we use %f
```