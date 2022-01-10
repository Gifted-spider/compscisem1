import java.util.Scanner;
import java.util.Random;

class starter {
	
	public static void jeff(int x, int y){
		int count = 0;
		int ans = x;
		while(true){
			ans = ans*x;
			count = count + 1;
			if (count == y){
				System.out.print(ans);
				return;
			}
		}
		}
	
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("What is your base number?");
		int x = sc.nextInt();
		System.out.println("What is your exponent number?");
		int y = sc.nextInt();
		System.out.print("Your answer is: ");
		jeff(x,y);
		
	}
}
 
 
 
 
 
 
 
 
 
        //\\
       //$ \\ 
      //  $ \\
     //------\\
    //   _    \\
   //  _| |_   \\
  //  \('^')/   \\
 //     (")      \\
//      ^ ^       \\ 