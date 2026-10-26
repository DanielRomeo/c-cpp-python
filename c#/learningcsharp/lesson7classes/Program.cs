// Classes, Objects and properties:

Article article = new Article(1,"Learning c#","Today I learned c#", "Daniel");



// Create a class:
public class Article
{
    // private fields:
    public string Id{ get; private set;}
    public string Title{get; private set;}
    public string Content{get; private set;}
    public string AuthorId{get; private set;}
    public bool isPublished{get; private set;}
    public DateTime CreatedAt{get; private set;}
    public DateTime? PublishedAt{get; private set;}

    // Constructor:
    public Article(string title, string content, string authorId)
    {
        if (string.IsNullOrWhiteSpace(title) || string.IsNullOrWhiteSpace(content) || string.IsNullOrWhiteSpace(authorId))
        {
            throw new ArgumentException("All Title, Content, AuthorId fields are required.");
        }
        Id = Guid.NewGuid().ToString(); // ? what does this mean?
        Title = title;
        Content = content;
        AuthorId = authorId;
        isPublished = false;
        CreatedAt = DateTime.UtcNow;
        PublishedAt = null;

    }

    
    public isPublished()
    {
        return _isPublished;
    }

    
    // set all remaning member variables...

    // Business methods:
    public void Publish()
    {
        _isPublished = true;
    }
    public void unPublish()
    {
        _isPublished = false;
    }

}

// Creating and using the Objects:
