interface Marks{
	int physics = 78, chemistry = 99, maths = 100;
	void printPercentage();
}

interface Sports{
	int runs = 448, wickets = 16, overs = 36;
	void calculateStats();
}

class Student implements Marks, Sports{
	Student(String name, int age){
		System.out.println("The name of student is " + name + " and is of age of " + age + " years old");
	}
	
	public void printPercentage(){
		float average;
		average = (float)(physics+chemistry+maths)/3;
		System.out.println("The average marks is " + average +"%");
	}

	public void calculateStats(){
		float rpo, wpo;
		rpo = (float)runs/overs;
		wpo = (float)wickets/overs;
		System.out.println("The runs per over is " + rpo + " and wickets per over is " + wpo + " of the student.");
	}
}

public class Assign06_Q04 {
	public static void main(String args[]){
		Student stud = new Student("Aayush Kumar", 19);
		stud.printPercentage();
		stud.calculateStats();
	}
}
