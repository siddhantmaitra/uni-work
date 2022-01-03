class parent {
    public void myError() {
        System.out.println("new error");
    }
}

class second extends parent {
    public void myError() {
        throw new ArithmeticException();
    }

    public static void main(String[] args) {
        second obj = new second();
        try {
            obj.myError();
        } catch (Exception e) {
            System.out.println("New exception raised: " + e);
        }
    }
}
