import java.util.Scanner;
import java.util.Random;

class character{
	String role = new String("Warrior");
	int strength = 5;
	int dexterity = 5;
	int intelligence = 5;
	int constitution = 5;
	int charisma = 5;
}

class starter {
	public static void main(String args[]) {
		character mycharacter = new character();
		System.out.println("Your role is " + (mycharacter.role));
		character mystrength = new character();
		System.out.println("Your strength trait is " + (mystrength.strength));
		character mydexterity = new character();
		System.out.println("Your dexterity trait is " + (mydexterity.dexterity));
		character myintelligence = new character();
		System.out.println("Your intelligence trait is " + (myintelligence.dexterity));
		character myconstitution = new character();
		System.out.println("Your constitution trait is " + (myconstitution.constitution));
		character mycharisma = new character();
		System.out.println("Your charisma trait is " + (mycharisma.charisma));
	}
}
