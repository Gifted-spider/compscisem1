import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.print("Please input your first number: ");
		int first = sc.nextInt();
		System.out.print("Please input your second number: ");
		int second = sc.nextInt();
		System.out.print("Pleases input your third number: ");
		int third = sc.nextInt();
		boolean biggest = ((first > second) && (first > third));
		if(biggest)
		{
			System.out.println("Your first number is the largest of the three!");
		}
		boolean biggest2 = ((second > first) && (second >third));
		if (biggest2)
		{
			System.out.println("Your second number is the largest of the three!");
		}
		boolean biggest3 = ((third > first) && (third > second));
		if (biggest3)
		{
			System.out.println("Your third number is the largest of the three!");
		}
		boolean snail = ((first < second) && (first < third));
		if (snail)
		{
			System.out.println("Your first number is the smallest of the three!");
		}
		boolean snail2 = ((second < first) && (second < third));
		if (snail2)
		{
			System.out.println("Your second number is the smallest of the three!");
		}
		boolean snail3 = ((third < first) && (third < second));
		if (snail3)
			{
				System.out.println("Your third number is the smallest of the three!");
			}
	}
}
