class command {
    public static void main(String args[]) {
        int a, b, sum;
        a = Integer.parseInt(args[0]);
        b = Integer.parseInt(args[1]);
        sum = a + b;

        System.out.println("The sum of the arguments is:");
        System.out.println("As strings: " + args[0] + args[1]);
        System.out.println("As integers: " + sum);
    }
}