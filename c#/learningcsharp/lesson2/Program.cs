// Lesson 2: Methods:
// Say we're building a backend for an accommodation platform.
// We want a method to calcualt the total rent for a specified number of months.

decimal CalculateRent(decimal monthlyRent, int months)
{
    return monthlyRent * months;
}

decimal total = CalculateRent(3500m, 6);
Console.WriteLine($"Totla rent is R{total}.");

