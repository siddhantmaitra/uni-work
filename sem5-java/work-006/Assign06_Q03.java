interface Flying{
	String Feature = "It can fly in the sky";
	void flying();
}
interface A{
	void method();
}
class Bird implements Flying,A{
	String Bname;
	
	public Bird(String nm){
		Bname =nm;	
	}
	public void flying(){
		System.out.println("Birds (eg:"+Bname+") fly in Troposphere");
	}
	public void method(){
		System.out.println("\nDummy method from Bird class");
	}

}
class Plane implements Flying,A{
	String Pname;
	public Plane(String ft){
		Pname = ft;
	}
	public void flying(){
		System.out.println("Planes (eg:"+Pname+") fly in Stratosphere");
	}
	public void method(){
		System.out.println("\nDummy method from Plane class");
	}
}
public class Assign06_Q03{
	public static void main(String args[]){
		Plane f1 = new Plane("Cessna");
		Bird f2 = new Bird("Crow");

		f1.flying();
		f1.method();
		f2.flying();
		f2.method();
	}
}
