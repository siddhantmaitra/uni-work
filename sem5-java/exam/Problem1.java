public class Problem1 {
  public static void main(String[] args) {
	System.out.println("Program written by: Siddhant Maitra, 14800119041");  
    System.out.println("Output: "); 
	for (String a : args) {
      StringBuilder word = new StringBuilder();
      word.append(a);
      word.reverse(); 
      System.out.print(word + " ");
    }
  }
}
