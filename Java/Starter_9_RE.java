public class Starter_9RE {
    public static void main(String[] args) {
        // Proper Introductionto Digit system in Java (Intergers)
        int decimalNumber = 255; // Decimal representation
        int binaryNumber = 0b11111111; // Binary representation
        int octalNumber = 0377; // Octal representation
        int hexNumber = 0xFF; // Hexadecimal representation

        // Other Types
        byte byteNumber = 100; // Byte type
        short shortNumber = 10000; // Short type
        long longNumber = 100000L; // Long type
        float floatNumber = 10.5f; // Float type
        double doubleNumber = 20.99; // Double type
        int plainInterger = 500; // Plain integer

        // Output all the values
        System.out.println("Decimal Number: " + decimalNumber);
        System.out.println("Binary Number: " + binaryNumber);
        System.out.println("Octal Number: " + octalNumber);
        System.out.println("Hexadecimal Number: " + hexNumber);
        System.out.println("Byte Number: " + byteNumber);
        System.out.println("Short Number: " + shortNumber);
        System.out.println("Long Number: " + longNumber);
        System.out.println("Float Number: " + floatNumber);
        System.out.println("Double Number: " + doubleNumber);
        System.out.println("Plain Integer: " + plainInterger);

        // Floating-point precision demonstration
        float floatPrecision = 1.234567f; // Float with limited precision
        double doublePrecision = 1.23456789012345; // Double with higher precision
        System.out.println("Float Precision: " + floatPrecision);
        System.out.println("Double Precision: " + doublePrecision);

        //Scientific Numbers
        double scientificNumber = 1.23e4; // Scientific notation
        float scientificFloat = 5.67e3f; // Scientific notation for float
        System.out.println("Scientific Number: " + scientificNumber);
        System.out.println("Scientific Float: " + scientificFloat);
    }
}