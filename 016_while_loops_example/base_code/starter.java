import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
	Scanner sc = new Scanner(System.in);
	System.out.println("What is your name?");
	String name = sc.nextLine();
	System.out.println("How many times should it print out?");
	int times = sc.nextInt();
	int count = 0;
	while(true){
		System.out.println(name);
		count = count + 1;
		if(count == times){
			break;
		}
	}
	}
}
