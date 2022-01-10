// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x = 0;
	int y = 0;
	cout << "Please enter first number: ";
	cin >> x;
	cout << "Please enter second number: ";
	cin >> y;
	char sign;
	cout << "Please enter the operation: ";
	cin >> sign;
	char plus = '+';
	char minus = '-';
	char divide = '/';
	char mult = '*';
	int ans;
	if(sign == plus){
		ans = (x + y);
		cout << x<< sign<< y << " = "<< ans;
	}
	else if(sign == minus){
		ans = (x - y);
		cout <<  x<< sign<< y << " = "<< ans;
	}
	else if(sign == divide){
		ans = (x/y);
		cout <<  x<< sign<< y << " = "<< ans;
	}
	else if(sign == mult){
		ans = (x*y);
		cout <<  x<< sign<< y << " = "<< ans;
	}
	else{
		cout << "that's not a sign";
	}
	
	

}
