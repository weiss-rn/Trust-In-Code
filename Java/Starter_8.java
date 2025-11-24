public class Starter_8 {
    /* Java Full supported variables demonstration */
    public static void main(String[] args) {
    int a = 5;
    float b = 4.5f;
    char c = 'A';
    String d = "Sekai";
    System.out.println("Integer: " + a);
    System.out.println("Float: " + b);
    System.out.println("Character: " + c);
    System.out.println("String: " + d);

    // Displaying full name by concatenating first and last names
    String firstName = "Akiyama";
    String lastName = "Mizuki";
    String fullName = firstName + " " + lastName;
    System.out.println("Full Name: " + fullName);
    

    // Demonstrating variable reassignment
    a = 10;
    b = 9.8f;
    System.out.println("Reassigned Integer: " + a);
    System.out.println("Reassigned Float: " + b);

    // Using variables in expressions
    int sum = a + 15;
    float product = b * 2.0f;
    System.out.println("Sum: " + sum);
    System.out.println("Product: " + product);


    // Using variables in conditional statements
    int mzk = 18;
    int ena = 20;
    System.out.println("Mizuki pick the number: " + mzk + " Ena pick the number: " + ena);
    System.out.println("Both numbers are greater than 15: " + (mzk > 15 && ena > 15));

    }
}