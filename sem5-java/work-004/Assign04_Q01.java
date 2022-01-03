//Basic polymorphism and operator overloading by concatenation.
public class Assign04_Q01{
	
	public int mul(int a, int b){
			
			return (a*b);
	}

	public int mul(int a, int b, int c){
		return(a*b*c);
	}

	public static void main(String[] args){
		Assign04_Q01 multiply = new Assign04_Q01();
		int product1= multiply.mul(10,20);
		int product2= multiply.mul(10,5,6);
		System.out.println
		("The product of 10,20 is "+product1+
		"\nMeanwhile, product of 10,5 and 6 is "+product2);
		
	}
}

