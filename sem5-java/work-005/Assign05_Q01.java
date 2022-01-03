class ABC {
   public void myMethod(){
	System.out.println("Overridden Method,present in class ABC");
   }
}
public class Assign05_Q01 extends ABC{

   public void myMethod(){
	System.out.println("\nOverriding Method,present in Assign05_Q01");
   }
   public static void main(String args[]){
	ABC obj = new ABC();
	obj.myMethod();


	Assign05_Q01 obj1 = new Assign05_Q01();
	obj1.myMethod();
   }
}
