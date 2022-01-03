import java.util.Scanner;

class fifth {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number to be divided by: ");
        int d = sc.nextInt();
        try {
            System.out.println("The result is: " + (100 / d));
        } catch (ArithmeticException e) {
            System.out.println("Error detected: " + e.getMessage());
            System.out.println("The number entered should be other than 0");
        }
    }
}
