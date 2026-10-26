// More on c# classes:
// Constructors, static members, object relationships:

// Instantiate: 
Article article = new Article("Learning c#", "This is an introduction course to C#");

// Instatiate with constructor that takes one or more arguments:
Article article2 = new Article("Learning c++");

// then now we learn the ''this'' keyword...
// then we learn about static members. -> lets track how many Article objects have been created.
Console.WriteLine(Article.ArticleCount);

public class Article
{
    public string Title { get; private set;}
    public string Content{ get; private set;}
    public static int ArticleCount{ get; private set;}

    // public Article(string title)
    // {
    //     Title = title;
    //     Content = "";
    // }
    public Article(string title) : this(title, ""){} // this is constructor chaining, helps avoid duplicate initialization code

    public Article(string title, string content)
    {
        this.Title = title;
        this.Content = content;
    }
}