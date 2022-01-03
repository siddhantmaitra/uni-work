
class A{
	String Str;
	public void setValue(){
		Str = "Default";
	
	}

	public void setValue(String s){
		Str=s;
	}
	public void printString(){
		System.out.println("String in class A (Parent)");
	}

}

public class Assign05_Q04 extends A{
	//overriding method	
	public void printString(){
		super.printString();
		System.out.println("The string is: "+Str);
	}
	public static void main(String[] args){
		Assign05_Q04 obj1 = new Assign05_Q04();
	
		obj1.setValue();
		obj1.printString();
		obj1.setValue("String of the child class");
		obj1.printString();
	
	}
}

