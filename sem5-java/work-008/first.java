class first {
    public static void main(String[] args) {
        try {
            int res = 55 / 0;
            System.out.println("The result is: " + res);
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic exception occured");
            System.out.println("The error catched: " + e.getMessage());
        }
    }
}


