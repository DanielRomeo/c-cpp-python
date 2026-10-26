// Loops:

// Basic iteration:
for(int i = 0; i <5; i++)
{
    // Console.WriteLine($"Article number: {i}");
}
//--------------------------------------------


// Small demonstration of how we would use this in a blog site:
// let the users insert the blog number and titles.

int articleCount = 0;

// while (articleCount <= 0)
// {
//     Console.WriteLine("How many articles ?");
//     string? input = Console.ReadLine();

//     if (!int.TryParse(input, out articleCount)) // if the user doesnt enter a valid number
//     {
//         Console.WriteLine("Please enter a valid number?");
//     }
// }
//Console.WriteLine($"Showing {articleCount} articles");

// do while loop:
// string? choice;
// do
// {
//     Console.WriteLine("\n -- Journal entry ----");
//     Console.WriteLine("1. View article");
//     Console.WriteLine("2. Create article");
//     Console.WriteLine("3. Exit");

//     Console.Write("Choose an option: ");
//     choice = Console.ReadLine();
// }while(choice != "3");

// For each loops:
// string[] articles =
// {
//     "Introduction to c#",
//     "understanding c#",
//     "building rest apis",
//     "connecting to firebase"
// };

// //
// foreach(string article in articles)
// {
//     Console.WriteLine(article);
// }

// Print only articles that are published:
string[] titles =
{
    "Introduction to c#",
    "understanding c#",
    "building rest apis",
    "connecting to firebase"
};
bool[] pulished =
{
    true, 
    false, 
    false,
    true    
};

// for(int i = 0; i < titles.Length; i++)
// {
//     if (pulished[i])
//     {
//         Console.WriteLine(titles[i]);
//     }
// }

// Break and continue:
for(int i  = 0; i <=10; i++)
{
    if(i == 5)
    {
        break; // exits out of the loop
    }
    Console.WriteLine(i);
}

Console.WriteLine("\n---------------------------------\n");

// Continue
for(int i  = 0; i <=10; i++)
{
    if(i == 5)
    {
        continue; // exits out of the loop
    }
    Console.WriteLine(i);
}
