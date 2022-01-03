class fourth {
    public static void main(String[] args) {
        for (int i = 0; i < 3; i++) {
            switch (i) {
                case 0:
                    System.out.println("\nDemonstrating nullpointer exception:");
                    try {
                        int ar[] = null;
                        System.out.println(ar[5]);
                    } catch (Exception e) {
                        System.out.println(e);
                    }
                    break;

                case 1:
                    System.out.println("\nDemonstrating Array index out of bounds exception:");
                    try {
                        int ar[] = new int[5];
                        System.out.println(ar[10]);
                    } catch (Exception e) {
                        System.out.println(e);
                    }
                    break;

                case 2:
                    System.out.println("\nDemonstrating String index out of bounds exception:");
                    try {
                        String s = "hello";
                        System.out.println(s.charAt(10));
                    } catch (Exception e) {
                        System.out.println(e);
                    }
                    break;
            }
        }
    }
}

