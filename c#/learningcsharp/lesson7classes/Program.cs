// Classes, Objects and properties:

// Insantiate and use the class:
Article article = new Article("Learning c#","Today I learned c#","1");



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

    // Update article content:
    public void Update(string title, string content)
    {
        if (string.IsNullOrWhiteSpace(title) || string.IsNullOrWhiteSpace(content))
        {
            throw new ArgumentException("Title and Content is required.");
        }
        Title = title;
        Content = content;
    }
    
    // publish an article:
    public void Publish()
    {
        if (isPublished)
        {
            return;
        }

        isPublished = true;
        PublishedAt = DateTime.UtcNow;
    }

    // Unpublish an artticle
    public void Unpublish()
    {
        isPublished = false;
        PublishedAt = null;
    }

}

// Creating and using the Objects:
