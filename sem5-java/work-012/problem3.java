class MyThread implements Runnable {
	public void run() {
		System.out.println("\nChild Thread Started");
		try {
			for (int c = 0; c < 3; c++) {
				System.out.println("\n" + Thread.currentThread().getName() + " - " + c);

				Thread.sleep(1000);
			}
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
	}
}
public class problem3{
	public static void main(String[] args) {
		System.out.println("\nMain Thread Started");
		MyThread obj = new MyThread();
		Thread t1 = new Thread(obj);
		t1.start();
		try {
			for (int c = 100; c < 105; c++) {
				System.out.println("\n" + Thread.currentThread().getName() + " - " + c);
				Thread.sleep(1000);
			}
		} catch (Exception e) {
			System.out.println(e.getMessage());

		}
		System.out.println("\nPriority of Main Thread: " +
				Thread.currentThread().getPriority());
		System.out.println("\nPriority of Child Thread - 1: " + t1.getPriority());
	}
}
