import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner (System.in);
		System.out.println("What's your first class?");
		String class1 = sc.nextLine();
		System.out.println("What's your second class?");
		String class2 = sc.nextLine();
		System.out.println("What's your third class?");
		String class3 = sc.nextLine();
		System.out.println("What's your fourth class?");
		String class4 = sc.nextLine();
		System.out.println("What's your fifth class?");
		String class5 = sc.nextLine();
		System.out.println("What's your sixth class?");
		String class6 = sc.nextLine();
		System.out.println("What's your seventh class?");
		String class7 = sc.nextLine();
		System.out.println("What's your " + class1 + " class's GPA (0-4)");
		double c1 = sc.nextDouble();
		System.out.println("What's your " + class2 + " class's GPA (0-4)");
		double c2 = sc.nextDouble();
		System.out.println("What's your " + class3 + " class's GPA (0-4)");
		double c3 = sc.nextDouble();
		System.out.println("What's your " + class4 + " class's GPA (0-4)");
		double c4 = sc.nextDouble();
		System.out.println("What's your " + class5 + " class's GPA (0-4)");
		double c5 = sc.nextDouble();
		System.out.println("What's your " + class6 + " class's GPA (0-4)");
		double c6 = sc.nextDouble();
		System.out.println("What's your " + class7 + " class's GPA (0-4)");
		double c7 = sc.nextDouble();
		System.out.println(class1 + "-" + c1);
		System.out.println(class2 + "-" + c2);
		System.out.println(class3 + "-" + c3);
		System.out.println(class4 + "-" + c4);
		System.out.println(class5 + "-" + c5);
		System.out.println(class6 + "-" + c6);
		System.out.println(class7 + "-" + c7);
		System.out.println("Total GPA " + (c1 + c2 + c3 + c4 + c5 + c6 + c7)/7);
		
	}
}
