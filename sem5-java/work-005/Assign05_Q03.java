class Animal{
	String Name; 
	int  Length;
	String Activity;

	public Animal(){
		Name="Mammal";
		Length=6;
		Activity="Locomote";

	}

	public Animal(String nm, int ln, String wk){
		Name=nm;
		Length=ln;
		Activity=wk;
	}
	
	public void getValue(){
		System.out.println("The name of animal is: " +Name);
		System.out.println("A "+Name+" is  "+Length+ "m");
	}

	public void Move(){
		System.out.println("The animal is moving");
		
	}
}


public class Assign05_Q03 extends Animal{
	
	public Assign05_Q03(){
		super();
	}
	
	public Assign05_Q03(String nm, int ln, String wk){
		super(nm,ln,wk);
	}

	public void Move(){
		
		System.out.println("The animal can do: "+Activity);
	}

	public static void main(String[] args){
		Assign05_Q03 obj1 = new Assign05_Q03();
		Assign05_Q03 obj2 = new Assign05_Q03("Human", 2, "Walking");
		obj1.getValue();
		obj1.Move();
		obj2.getValue();
		obj2.Move();
		
	}

		
}
