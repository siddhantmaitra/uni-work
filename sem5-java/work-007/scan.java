import java.util.Scanner;

class scan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ch;
        int a, b;
        System.out.println("Enter the command(+,-,*,/): ");
        ch = sc.next();
        System.out.println("Enter the numbers: ");
        a = sc.nextInt();
        b = sc.nextInt();

        switch (ch.charAt(0)) {
        case '+':
            double temp = a + b;
            System.out.println("The addition is: " + temp);
            break;

        case '-':
            temp = a - b;
            System.out.println("The substraction is: " + temp);
            break;

        case '*':
            temp = a * b;
            System.out.println("The multiplication is: " + temp);
            break;

        case '/':
            temp = a / b;
            System.out.println("The division is: " + temp);
            break;

        default:
            System.out.println("Invaid command");
            break;
        }
    }
}
