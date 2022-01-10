import java.util.Scanner;
class starter {
	
	public static void multdiv3(int a, int b){
		int x = a;
		int y = b;
		int mult = x*y;
		if(mult%3 == 0){
			System.out.println("The two numbers multiplyed is " + mult + " and is divisible by 3!");
			return;
		}
		else{
			System.out.println("The two numbers multiplied is " + mult + " and is not divisible by 3 :(");
			return;
		}
	}
	
	public static void main(String args[]) {
		Scanner sc = new Scanner (System.in);
		System.out.println("Choose a number: ");
		int x = sc.nextInt();
		System.out.println("Choose a number: ");
		int y = sc.nextInt();
		multdiv3(x,y);
	}
}
