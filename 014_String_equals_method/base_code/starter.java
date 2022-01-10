import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.println("Would you like to be a Wizard, Warrior, or Rogue?");
		String role = sc.nextLine();
		if((role.equals("wizard")) || (role.equals("Wizard"))){
			System.out.println("You have chosen the Wizard! Excelsior!");
		}
		else if((role.equals("warrior")) || (role.equals("Warrior"))){
			System.out.println("You have chosen the Warrior! For honor!");
		}
		else if ((role.equals("rogue")) || (role.equals("Rogue"))){
			System.out.println("You have chosen the Rogue! How cunning!");
		}
		else{
			System.out.println("You have decieded not to choose a role. Rerun program.");
		}
	}
}
