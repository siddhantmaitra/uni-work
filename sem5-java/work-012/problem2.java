class MyThread extends Thread {
	public void run() {
		System.out.println("\nChild Thread Started");
		try {
			for (int c = 0; c < 3; c++) {
				System.out.println(Thread.currentThread().getName() + " - " + c);
				Thread.sleep(1000);
			}
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
	}
}
class problem2 {
	public static void main(String[] args) {
		System.out.println("\nMain Thread Started");

		MyThread t1 = new MyThread();
		t1.setName("Child-1");
		t1.setPriority(Thread.MIN_PRIORITY);
		t1.start();
		MyThread t2 = new MyThread();
		t2.setName("Child-2");
		t2.setPriority(Thread.MAX_PRIORITY);
		t2.start();
		try {
			for (int c = 100; c < 105; c++) {
				System.out.println(Thread.currentThread().getName() + " - " + c);
				Thread.sleep(1000);
			}
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
		System.out.println("\nPriority of Main Thread: " +
				Thread.currentThread().getPriority());
		System.out.println("\nPriority of Child Thread - 1: " + t1.getPriority());
		System.out.println("\nPriority of Child Thread - 2: " + t2.getPriority());

	}
}
