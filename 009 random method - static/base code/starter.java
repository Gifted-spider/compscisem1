import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Random rand = new Random();
		int rand_num1 = rand.nextInt(10);
		System.out.println(rand_num1);
		Random bob = new Random();
		int rand_num2 = rand.nextInt(99)+ 1;
		System.out.println(rand_num2);
		Random martha = new Random();
		double rand_num3 = rand.nextInt(1)+2.4+rand.nextDouble();
		System.out.println(rand_num3);
		Random kathy = new Random();
		double rand_num4 = rand.nextInt(575)+14+rand.nextDouble();
		System.out.println(rand_num4);
	}
}
