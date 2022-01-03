class MyThread extends Thread {
	public void run() {
		for (int c = 0; c < 5; c++) {
			System.out.println("\n" + Thread.currentThread().getName() + " - " + c);
		}
	}
}
class MyThread1 extends Thread {
	public void run() {
		for (int c = 0; c < 5; c++) {
			System.out.println("\n" + Thread.currentThread().getName() + " - " + c);
		}
	}
}
class MyThread2 extends Thread {
	public void run() {
		for (int c = 0; c < 5; c++) {
			System.out.println("\n" + Thread.currentThread().getName() + " - " + c);
		}
	}
}
public class problem1{
	public static void main(String[] args) {
		System.out.println("\n\nMAIN = " + Thread.currentThread().getName());
		MyThread t1 = new MyThread();
		t1.setName("Child - 1");
		t1.setPriority(Thread.MIN_PRIORITY);
		MyThread1 t2 = new MyThread1();
		t2.setName("Child - 2");
		t2.setPriority(Thread.NORM_PRIORITY);
		MyThread2 t3 = new MyThread2();
		t3.setName("Child - 3");
		t3.setPriority(Thread.MAX_PRIORITY);
		t1.start();
		t2.start();
		t3.start();
		System.out.println("\nPriority of Main Thread: " +
				Thread.currentThread().getPriority());
		System.out.println("\nPriority of Child Thread - 1: " + t1.getPriority());
		System.out.println("\nPriority of Child Thread - 2: " + t2.getPriority());
		System.out.println("\nPriority of Child Thread - 3: " + t3.getPriority());
	}
}
