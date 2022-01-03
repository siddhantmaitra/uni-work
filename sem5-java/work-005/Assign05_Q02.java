class A{
	String Str;
	public A(){
		Str = "Default";
	
	}

	public A(String s){
		Str=s;
	}
	
	public void printString(){
		System.out.println("\nOveridden string");
	}

}

public class Assign05_Q02 extends A{
	public Assign05_Q02(){
		super();
	}
	public Assign05_Q02(String s){
		super(s);
	}
		
	public void printString(){
		super.printString();
		System.out.println("The string is: "+Str);
	}
	public static void main(String[] args){
		Assign05_Q02 obj1 = new Assign05_Q02();
		Assign05_Q02 obj2 = new Assign05_Q02("New String");
		obj1.printString();
		obj2.printString();
	
	}
}

