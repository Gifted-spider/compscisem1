// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x = 5;
	int fifteen = 15;
	int count_1 = 5;
	int count_2 = 5;
	
	while(x <= 25){
		cout << x << endl;
		x = x + 1;
	}
	
	cout << "" << endl;

	for(int j = 15; j >= 5; j = j - 1){
		cout << j << endl;
	}
	
	cout << endl;
	
	for(int i = 5; i <= 25; i = i + 1){
		cout << i << endl;
	}	
	
	
	
	
	
}
