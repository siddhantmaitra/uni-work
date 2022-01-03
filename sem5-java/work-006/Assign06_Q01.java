interface Student{
	String name="Aayush Kumar";
	int age=20;
	void getStudentDetails();
}

class Marks{
	int totalMarks;
	int Percentage;

	public Marks(int m1, int m2, int m3, int m4){
		int marks_a = m1;
		int marks_b = m2 ; 
		int marks_c = m3;
		int marks_d = m4;
		totalMarks= marks_a + marks_b + marks_c+ marks_d;
		Percentage= totalMarks;
	}
}

class Sport{
	String Game="Cricket";
	int runsScored;
	int wicketsTaken;

	public Sport(int r1, int r2, int r3, int r4, int w){
		runsScored= r1 + r2 + r3 + r4;
		wicketsTaken= w; 

	}
}

public class Assign06_Q01 implements Student{
	public void getStudentDetails(){
		System.out.println("\t\tStudent Details\nName: "+name);
		System.out.println("\nAge:"+age);
		
	}
	
	public static void main(String args[]){
		Assign06_Q01 obj  = new Assign06_Q01();
		Marks st_marks = new Marks(20,19,16,20);
		Sport st_sports= new Sport(50,60,23,5,12);
		obj.getStudentDetails();

		System.out.println("\nTotal marks secured out of 100: "+st_marks.totalMarks);
		System.out.println("Total percentage: "+st_marks.Percentage+"%");

		System.out.println("\nGame Played:"+st_sports.Game+"\nTotal runs secured: "+st_sports.runsScored);
		System.out.println("Total wickets: "+st_sports.wicketsTaken);
	}
}	



