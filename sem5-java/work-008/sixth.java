import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Bank {
    private String accno;
    private String name;
    private long balance;

    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    void openAccount() throws IOException {
        System.out.print("\nEnter account number:  ");
        accno = br.readLine();
        System.out.print("Enter name of account holder: ");
        name = br.readLine();
        System.out.print("Enter balance:  ");
        balance = Long.parseLong(br.readLine());
    }

    void showAccount() {
        System.out.println("\n" + accno + ", " + name + ", " + balance);
    }

    void deposit() throws IOException {
        long amnt;
        System.out.println("Enter the amount to be deposited: ");
        amnt = Long.parseLong(br.readLine());
        balance = balance + amnt;
    }

    void withdrawal() throws IOException {
        long amnt;
        System.out.println("Enter the amount to be withdrawn: ");
        amnt = Long.parseLong(br.readLine());
        if (balance >= amnt) {
            balance = balance - amnt;
        } else {
            System.out.println("Insufficient funds.Transaction failed.");
        }
    }

    boolean search(String acn) {
        if (accno.equals(acn)) {
            showAccount();
            return (true);

        } else {
            return (false);
        }
    }
}

public class sixth {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Input the desired number of customers: ");
        int n = Integer.parseInt(br.readLine());
        Bank C[] = new Bank[n];
        for (int i = 0; i < C.length; i++) {
            C[i] = new Bank();
            C[i].openAccount();
        }

        int choice;
        do {

            System.out.println("\n\n\t\tMenu \n1.Display All \n2.Search By Account \n3.Deposit \n4.Withdraw \n5.Exit");
            System.out.println("Your choice: ");
            choice = Integer.parseInt(br.readLine());
            switch (choice) {
                case 1:
                    for (int i = 0; i < C.length; i++) {
                        C[i].showAccount();
                    }
                    break;

                case 2:
                    System.out.print("Enter Account Number: ");
                    String acn = br.readLine();
                    boolean found = false;
                    for (int i = 0; i < C.length; i++) {
                        found = C[i].search(acn);
                    }
                    break;

                case 3:
                    System.out.print("Enter Account Number:	 ");
                    acn = br.readLine();
                    found = false;
                    for (int i = 0; i < C.length; i++) {
                        found = C[i].search(acn);
                        if (found) {
                            C[i].deposit();
                            break;
                        } else {
                            System.out.println("Account does not exist in our records.");
                        }
                    }
                    break;
                case 4:
                    System.out.print("Enter Account Number: ");
                    acn = br.readLine();
                    found = false;
                    for (int i = 0; i < C.length; i++) {
                        found = C[i].search(acn);
                        if (found) {
                            C[i].withdrawal();
                            break;
                        } else {
                            System.out.println("Account does not exist in our records.");
                        }
                    }
                    break;

                case 5:
                    System.out.println("Exiting..");
                    break;
            }
        } while (choice != 5);
        br.close();
    }
}
