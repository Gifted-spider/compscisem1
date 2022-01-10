// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x = 10;
	
	cout<< x <<endl;
	cout<<"yeah we are starting c++";
	cout<<"yeah we are starting c++"<<endl;
	cout<< "my number is " << x <<endl;
	
	cout << "Put in a number: ";
	int y = 0;
	cin >> y;
	cout << "Put in another number: ";
	int z = 0;
	cin >> z;
	int ans = (y*z);
	cout << y << " times " << z << " equals " << ans;
}
