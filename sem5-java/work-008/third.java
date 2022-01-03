class myException extends Exception {
    public myException(String s) {
        super(s);
    }

    public String getMessage() {
        return "Custom error message";
    }
}

class third {
    public static void main(String[] args) {
        try {
            throw new myException("Raise");
        } catch (myException e) {
            System.out.println("Exception caught");
            System.out.println("Error message: " + e.getMessage());
        }
    }
}
