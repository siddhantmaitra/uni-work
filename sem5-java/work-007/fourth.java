import java.io.*;

class fourth {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter your name: ");
        String name = br.readLine();
        System.out.println("\nEnter your age: ");
        int age = Integer.parseInt(br.readLine());
        System.out.println("\nYour name is " + name + " and your age is " + age);

    }
}
