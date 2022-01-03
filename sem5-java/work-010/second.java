class myThread extends Thread {
  static String s[] = { "It", "Is", "Monday" };

  public void run() {
    System.out.println(getName());
    s1.myThread(s);
  }

  void waiting() {
    try {
      Thread.sleep(1000);
    } catch (Exception e) {
      System.out.println(e.getMessage());
    }
  }
}

class s1 {
  public static synchronized void myThread(String ob[]) {
    myThread t = (myThread) Thread.currentThread();
    for (int i = 0; i < ob.length; i++) {
      t.waiting();
      System.out.println(ob[i]);
    }
  }
}

class second {
  public static void main(String[] args) {
    myThread ob = new myThread();
    myThread ob1 = new myThread();
    ob.start();
    ob1.start();
  }
}
