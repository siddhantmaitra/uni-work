class Shape{
	String name;
	float area;

	void calcArea(String nm, float r){
		area= ((22/7)*r*r);
		name=nm;
		printData();
	}


	void calcArea(String nm, int a, int b ){
		area= (a*b);
		name=nm;
		printData();
	}
	void calcArea(String n, int s){
		area= (s*s);
		name=n;
		printData();
	}
	void calcArea(String nm, float b , float h){
		area=(float) ((b*h)/2.0);
		name=nm;
		printData();
	}
	void printData(){
		System.out.println("\nThe area of "+name+"is: "+area+"sqcm");
	}
}

public class Assign04_Q02{
public static void main(String[] args){
		Shape circle= new Shape();
		Shape rect= new Shape();
		Shape square= new Shape();
		Shape triangle= new Shape();

		circle.calcArea("Circle", 2.5f);
		rect.calcArea("Rectangle",4,5);
		square.calcArea("Square",7);
		triangle.calcArea("Triangle", 5.5f, 6.2f);
	}
}



