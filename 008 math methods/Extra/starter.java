import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.println("Please enter a double: ");
		double x = sc.nextDouble();
		System.out.println("Please enter another double: ");
		double y = sc.nextDouble();
		double max = Math.max(x,y);
		double square = Math.sqrt(y);
		double powers = Math.pow(x,y);
		System.out.println("Maximum number of x and y is: " + max);
		System.out.println("Square root of y is: " + square);
		System.out.println("Power of x and y is: " + powers);
	}
}
