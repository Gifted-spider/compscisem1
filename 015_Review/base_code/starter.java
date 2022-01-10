import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner (System.in);
		System.out.println("What is your name?");
		String name = sc.nextLine();
		System.out.println("What is your title? Ex: Slayer of Dragons");
		String title = sc.nextLine();
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
			System.out.println("You have decieded not to choose a role.");
			role = ("no role");
		}
		System.out.println("You have 25 skill points to spend in the following : Strength, Dexterity, Intelligence, Constitution, and Charisma. Spend them wisely.");
		int pts = 25;
		
			//strength
		System.out.print("Strength (1-10): ");
		int max = 11;
		int strength = sc.nextInt();
		boolean stren1 = (strength < max);
		if (stren1){
			pts = pts - strength;
			System.out.println("You have " + pts + " left to spend.");
		}
		else{
			System.out.print("Please input a smaller value. Strength (1-10): ");
			int strength2 = sc.nextInt();
		    boolean stren2 = (strength2 < max);
			if (stren2){
			pts = pts - strength2;
			System.out.println("You have " + pts + " left to spend.");
			}
			else{
			System.out.println("Stop it ");
			}
		}
		
			//dexterity
		System.out.print("Dexterity (1-10): ");
		int dexterity = sc.nextInt();
		boolean dex1 = (dexterity < max);
		if (dex1){
			pts = pts - dexterity;
			System.out.println("You have " + pts + " left to spend.");
		}
		else{
			System.out.print("Please input a smaller value. Dexterity (1-10): ");
			int dex3 = sc.nextInt();
		    boolean dex4 = (dex3 < max);
			if (dex4){
			pts = pts - dex3;
			System.out.println("You have " + pts + " left to spend.");
			}
			else{
			System.out.println("Stop it ");
			}
		}
		
		//Intelligence
		System.out.print("Intelligence (1-10): ");
		int intelligence = sc.nextInt();
		boolean inte1 = (intelligence < max);
		if (inte1){
			pts = pts - intelligence;
			System.out.println("You have " + pts + " left to spend.");
		}
		else{
			System.out.print("Please input a smaller value. Intelligence (1-10): ");
			int inte3 = sc.nextInt();
		    boolean inte4 = (inte3 < max);
			if (inte4){
			pts = pts - inte3;
			System.out.println("You have " + pts + " left to spend.");
			}
			else{
			System.out.println("Stop it ");
			}
		}
		
			//Constitution
			System.out.print("Constitution (1-10): ");
		int constitution = sc.nextInt();
		boolean con1 = (constitution < max);
		if (con1){
			pts = pts - constitution;
			System.out.println("You have " + pts + " left to spend.");
		}
		else{
			System.out.print("Please input a smaller value. Consitution (1-10): ");
			int con3 = sc.nextInt();
		    boolean con4 = (con3 < max);
			if (con4){
			pts = pts - con3;
			System.out.println("You have " + pts + " left to spend.");
			}
			else{
			System.out.println("Stop it ");
			}
		}
		
		//Charisma
		System.out.print("Charisma (1-10): ");
		int charisma = sc.nextInt();
		boolean cha1 = (charisma < max);
		if (cha1){
			pts = pts - charisma;
			System.out.println("You have " + pts + " left to spend.");
		}
		else{
			System.out.print("Please input a smaller value. Charisma (1-10): ");
			int cha3 = sc.nextInt();
		    boolean cha4 = (cha3 < max);
			if (cha4){
			pts = pts - cha3;
			System.out.println("You have " + pts + " left to spend.");
			}
			else{
			System.out.println("Stop it ");
			}
		}
		
		boolean leftover = (pts > 0);
		if (leftover){
			System.out.println(pts);
		}
		System.out.println("------------------------------");
		System.out.println("You are " + name + ", the " + title + " of CVHS.");
		System.out.println("You're a " + role + " with the following stats:");
		System.out.println("Strength - " + strength);
		System.out.println("Dexterity - " + dexterity);
		System.out.println("Intelligence - " + intelligence);
		System.out.println("Constitution - " + constitution);
		System.out.println("Charisma - " + charisma);
		System.out.println("Good luck on your quest " + name + "!");
	}
}
		//What is your name? 
		//Peter
		//What is your title? Ex: Slayer of Dragons
		//Friendly Neiborhood Dragonslayer
		//Would you like to be a Wizard, Warrior, or Rogue? 
		//warrior
		//You've chosen the Warrior! For honor!
		//You have 25 skill points to spend in the following: Strength, Dexterity, Intelligence, Constitution, and Charisma. Spend them wisely.
		//Strength (1-10): 6
		//You have 19 left to spend.
		//Dexterity (1-10): 6
		//You have 13 left to spend.
		//Intelligence (1-10): 1
		//You have 12 left to spend.
		//Constitution (1-10): 6
		//You have 6 left to spend.
		//Charisma (1-10): 6
		//--------------------------------------------------
		//You are Peter, the Friendly Neiborhood Dragonslayer of CVHS.
		//You're a warrior with the following stats!
		//Strength - 6
		//Dexterity - 6
		//Intelligence - 1
		//Constitution - 6
		//Charisma - 6
		//Good luck on your quest Peter!
