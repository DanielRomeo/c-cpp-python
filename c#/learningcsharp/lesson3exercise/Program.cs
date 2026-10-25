// Lesson3 : Exercise.
// Simple rpgram that asks for user information and the fees that they are paying:
// Then calculate the total fees.
// Display in formatted summary.

// Get the varibles:
string name ;
int months;
decimal fee;
string feeString;
decimal total;

// Get the user input:
Console.WriteLine("Hello, please enter your name.");
name = Console.ReadLine();
Console.WriteLine("How many months will you attend?");
months = int.Parse(Console.ReadLine());
// ask for school fees?
Console.WriteLine("What is the school fees?");
fee = decimal.Parse(Console.ReadLine());

decimal calculateTotalFees(decimal fee, int months)
{
    return fee * months;
}



// Console.WriteLine("Your final data is:");
Console.WriteLine($"Your name is : {name}, number of months is : {months}, Your total fees are: {calculateTotalFees(fee,months)}");
