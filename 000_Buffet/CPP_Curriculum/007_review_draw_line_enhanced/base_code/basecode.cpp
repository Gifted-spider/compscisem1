// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char symbol = '*';
	int length = 0;
	int x = 0;
	int y = 0;
	cout << "Please enter line length: ";
	cin >> length;
	cout << "Please enter line symbol: ";
	cin >> symbol;
	cout << "Please enter line x coordinate: ";
	cin >> x;
	cout << "Please enter line y coordinate: ";
	cin >> y;
	
	for(int c = 0; c <= length; c = c + 1){
		gotoxy(x,y);
		cout << symbol;
		x = x + 1;
	}
}
