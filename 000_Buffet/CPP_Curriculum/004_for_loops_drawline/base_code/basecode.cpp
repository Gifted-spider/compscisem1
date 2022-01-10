// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char symbol = '*';
	int length = 0;
	char vert = 'h';
	cout << "Please enter the symbol: ";
	cin >> symbol;
	cout << "Please enter line length: ";
	cin >> length;
	cout << "Horizontal or vertical (h or v): ";
	cin >> vert;

	for(int c = 0; c < length; c = c + 1){
		if(vert == 'h'){
			cout << symbol;
		}
		if(vert == 'v'){
			cout << symbol << endl;
		}
	}
}
