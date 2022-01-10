import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		Random rand = new Random();
		
		System.out.println("Slot Machine Rules:");
		System.out.println("1. Each player starts with $100.");
		System.out.println("2. Input a wager less than your total amount of money.");
		System.out.println("3. The slot machine will roll 3 numbers from 1 to 10.");
		System.out.println("   a. If two numbers match, you double your money.");
		System.out.println("   b. If three numbers match, you triple your money.");
		System.out.println("   c. If none match, you lose your money.");
		System.out.println("--------------------------------------------------");
		System.out.println();
		
		while(true){
		System.out.print("Would you like to play the slots? (Yes/yes/Y/y) : ");
		String ans = sc.nextLine();
		
		if((ans.equals("No")) || (ans.equals("no")) || (ans.equals("N")) || (ans.equals("n")));
		while (true){
			break;
		}
		
		if (ans.equals("Y") || (ans.equals("y")) || (ans.equals("Yes")) || (ans.equals("yes"))){
			int start = 100;
			while (start > 0){
			System.out.print("You have $" + start + ". How much would you like to wager? ");
			int wager = sc.nextInt();
				if(wager > start){
				}
			int die1 = rand.nextInt(11);
			int die2 = rand.nextInt(11);
			int die3 = rand.nextInt(11);
			System.out.println("          | " + die1 + " |   " + "| "+ die2 + " |   " + "| " + die3 + " |");
			boolean two = ((die1 == die2) || (die2 == die3) || (die1 == die3));
			boolean three = ((die1 == die2) && (die2 == die3) && (die1 == die3));
			if (two){
				System.out.println("Score! Your wager is doubled!");
				start = wager * 2;
				System.out.println("You now have $" + start + ".");
			}
			else if (three){
				System.out.println("JACKPOT!!!! Your wager is TRIPLED!!!!!");
				start = wager * 3;
				System.out.println("You now have $" + start + ".");
			}
			else{
				System.out.println("You lost the money. :(");
				start = start - wager;
				System.out.println("You now have $" + start + ".");
			}
			}
		}
		}
		
	}
}
