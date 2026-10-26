// Conditional statments:

// Before that, lets learn how to use TryParse()
string input = "25";
bool success = int.TryParse(input, out int age);
Console.WriteLine(success); // returns true; otherwise, you can error handle
Console.WriteLine(age); // 25, displays the age.

// demonstration: // let the user insert their age and try to error handle:
Console.WriteLine("Enter your age.");
//string? input = Console.ReadLine();  // ? allows it to contain a string or null

// string stringVariable = "whatever string";
// stringVariable = null;


// ------------------------------------------------

bool isPublished = true;

if(isPublished)
{
    Console.WriteLine("It is published!");
}
else
{
    Console.WriteLine("Not published.");
}

// Comparison operators:
int views = 1500;
if(views >= 1000)
{
    Console.WriteLine("Popular article.");
}else if(views >= 500)
{
    Console.WriteLine("Growing article");
}

// Logical operators:
bool isDeleted = false;
if(isPublished && !isDeleted)
{
    Console.WriteLine("Show article");
}

// tenary operators:
string result = isPublished ? "Public" : "Draft";
Console.WriteLine(result);
// ----------------------------------------------
// How to handle Null

