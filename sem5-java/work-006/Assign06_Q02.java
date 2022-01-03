interface Flying{
	String Feature = "It can fly in the sky";
	void flying();
}


class Bird implements Flying{
	String Bname;
	
	public Bird(String nm){
		Bname =nm;
		
	}

	public void flying(){
		System.out.println("Birds (eg:"+Bname+") fly in Troposphere");
	}

}

class Plane implements Flying{
	String Pname;
	public Plane(String ft){
		Pname = ft;
	}

	public void flying(){
		System.out.println("Planes (eg:"+Pname+") fly in Stratosphere");
	
	
	}

}

public class Assign06_Q02{

	public static void main(String args[]){
		Plane f1 = new Plane("Cessna");
		Bird f2 = new Bird("Crow");

		f1.flying();
		f2.flying();

	}
	

}
