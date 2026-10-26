// Lists, arrays, dictionaries.


// Arrays:
// Declare an array:
string[] articles =
{
    "Learning c#",
    "introduction to asp.",
    "Understanding firebase",
    "Building REST APIs"
};

//Console.WriteLine(articles[0]);
articles[1] = "Introduction to ASP.NET";
//Console.WriteLine(articles[1]);

// Lists:
// List<T>

List<string> ArchivedArticles  = new List<string>();
ArchivedArticles.Add("Learning c#.");
ArchivedArticles.Add("Understanding Compilers.");

// Get the count:
// Console.WriteLine(ArchivedArticles.Count);


// Common list operators:
// Adding an element to the List:
ArchivedArticles.Add("Added an element to the list.");

// Remove an article from the list:
ArchivedArticles.Remove("Learning c#."); // Removed the first element from the list.

bool doesExist = ArchivedArticles.Contains("Understanding Compilers.");
//Console.WriteLine(doesExist);

//ArchivedArticles.Clear(); // removes all elements in the list...

// Insert at index number:
ArchivedArticles.Insert(0, "The real first article.");

// Iterate through the list:
foreach(string article in ArchivedArticles)
{
    //Console.WriteLine(article);
}


// ------------------------------------------------
// Dictionaries:

Dictionary<int , string> LikedArticles = new();
LikedArticles.Add(111, "The first of many");
LikedArticles.Add(145, "How to calculate posts");
LikedArticles.Add(232, "Last blog post");

Console.WriteLine(LikedArticles[232]);

// 

