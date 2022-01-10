// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char  sign = 'x';
	char add = '+';
	char sub = '-';
	char mult = '*';
	char div = '/';
	int x = 0;
	int y = 0;

	while(true){
		cout << "Input your first number: ";
		cin >> x;
		cout << "Input your second number: ";
		cin >> y;
		cout << "Input the sign: ";
		cin >> sign;
  
  if(sign == add){
    int ans = x + y;
    cout << ans << endl;
  }
  else if(sign == sub){
    int ans = x - y;
    cout << ans << endl;
  }
  else if(sign == mult){
    int ans = x * y;
    cout << ans << endl;
  }
  else if(sign == div){
    int ans = x / y;
    cout << ans << endl;
  }
  
  char keep = 'x';
  cout<<"Would you like to keep using the calculator?(y or n) "<< endl;
  cin>>keep;
  char stop = 'n';
  if(keep == stop){
    break;
  }
}


} 