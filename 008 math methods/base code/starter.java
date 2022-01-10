import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		double greg = Math.max(13-6*11,30%7*(-2));
		double bob = Math.sqrt(3*8+31%7);
		double mary = Math.pow(37/3,35%12);
		double ann = Math.max(Math.pow(2,14%3),Math.sqrt(2*6));
		System.out.println(greg);
		System.out.println(bob);
		System.out.println(mary);
		System.out.println(ann);
	}
}
