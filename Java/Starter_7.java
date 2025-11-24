public class Starter_7 {
    /* Java program to demonstrate the use of instance variables
    and how to access them within the main method.*/
    int add(int x, int y) {
        return x + y;
    }
    
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        Starter_7 obj = new Starter_7();
        int sum = obj.add(a, b);
        System.out.println("The sum of a and b is: " + sum);
    }
}
