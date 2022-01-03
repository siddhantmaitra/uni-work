interface A{
	int a = 10;
	void method1();
}

interface B{
	int b = 20;
	void method2();
}


public class Assign06_Q05 implements A,B{	
	
	public void method1(){
		System.out.println("Method 1");	
	}
	public void method2(){
		System.out.println("Method 2");
	}

	public static void main(String[] args){
		A obj1 = new Assign06_Q05();
		System.out.println(obj1.a);
		obj1.method1();


		B obj2 = new Assign06_Q05(); 
		System.out.println(obj2.b);
		obj2.method2();

	}

}

