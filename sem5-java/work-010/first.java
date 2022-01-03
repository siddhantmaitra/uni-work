class first {
  public static void main(String[] args) {
    Thread t = Thread.currentThread();
    System.out.println("Thread Name: " + t.getName());
    System.out.println("Thread Priority: " + t.getPriority());

    try {
      t.setName("Dummy Thread");
      t.setPriority(Thread.MAX_PRIORITY);
      System.out.println("Thread Name: " + t.getName());
      System.out.println("Thread Priority: " + t.getPriority());
      Thread.sleep(1000);
    } catch (Exception e) {
      System.out.println(e.getMessage());
    }
  }
}
