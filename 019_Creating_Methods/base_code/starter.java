import java.util.Scanner;
import java.util.Random;

class starter {
	
	public static void toString(String a, String b){
		// Your code goes below here
		System.out.println(a);
		System.out.println(b);
		return;
		}
		
	public static void main(String args[]) {
		//toString sc = new toString(System.in);
		Scanner sc = new Scanner(System.in);
		System.out.println("Write a sentence!");
		String a = sc.nextLine();
		//sent1 = a;
		System.out.println("Write a sentence!");
		String b = sc.nextLine();
		//sent2 = b;
		System.out.println();
		System.out.println("This is using the methods!");
		toString(a,b);
	}
}
