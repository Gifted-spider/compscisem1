import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.print("Please input your first number: ");
		int num1 = sc.nextInt();
		System.out.print("Please input your second number: ");
		int num2 = sc.nextInt();
		boolean jack = (num1 != num2);
		if(jack)
		{
			System.out.print("Your numbers are different!");
		}
	}
}
