import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		Random rand = new Random();
		int num = rand.nextInt(1002)+ 1;
		System.out.println("Guess a number between 1 and 1000:");
		int users = sc.nextInt();
		boolean yes = (users == num);
		if(yes)
		{
			System.out.println("You guessed the number! :D");
		}
		else{
			System.out.println("You didn't guess the number :(");
		}
	}
}
