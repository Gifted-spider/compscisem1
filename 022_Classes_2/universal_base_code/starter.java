import pkg.*;
import java.util.Scanner;
import java.util.Random;


class starter {
	public static void main(String args[]) {
		// Your code goes below here
		myCharacter character = new myCharacter();
		myCharacter character1 = new myCharacter();
		System.out.println("Your role is " + (character1.role));
		myCharacter mystrength = new myCharacter();
		System.out.println("Your strength trait is " + (mystrength.strength));
		myCharacter mydexterity = new myCharacter();
		System.out.println("Your dexterity trait is " + (mydexterity.dexterity));
		myCharacter myintelligence = new myCharacter();
		System.out.println("Your intelligence trait is " + (myintelligence.intelligence));
		myCharacter myconstitution = new myCharacter();
		System.out.println("Your constitution trait is " + (myconstitution.constitution));
		myCharacter mycharisma = new myCharacter();
		System.out.println("Your charisma trait is " + (mycharisma.charisma));


		
	}
}
