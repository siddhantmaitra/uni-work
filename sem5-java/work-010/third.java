class MyThread implements Runnable {
  public void run() {
    System.out.println("Am running");
  }

  public void start() {
    System.out.println("Start");
  }

  public void stop() {
    System.out.println("Stop");
  }

  public void sleep() {
    System.out.println("Am sleeping");
  }
}

class third{
  public static void main(String[] args) {
    MyThread obj = new MyThread();
    Thread t = new Thread(obj);
    System.out.println(t);
    t.start();
    t.run();
    // t.stop();
    try {
      t.sleep(1000);
    } catch (Exception e) {
      System.out.println(e.getMessage());
    }
  }
}
