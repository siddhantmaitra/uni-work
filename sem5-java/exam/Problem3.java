public class Problem3{  
  private static int count;  
  public Problem3()   
  { 
    count++;  
  }  
  public static void main(String args[])   
  {    
    Problem3 obj1 = new Problem3();  
    Problem3 obj2 = new Problem3();  
    Problem3 obj3 = new Problem3();  
    Problem3 obj4 = new Problem3();  
    Problem3 obj5 = new Problem3();
    System.out.println("Program written by: Siddhant Maitra, 14800119041");
	System.out.print("Number of Objects formed: " + Problem3.count+"\n");  
  }
}
