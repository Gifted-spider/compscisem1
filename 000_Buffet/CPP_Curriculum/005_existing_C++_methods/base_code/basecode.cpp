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
	cout << "Horizontal, vertical, or diagonal (h, v, or d): ";
	cin >> vert;
	
	int across = 0;
	int down = 4;

	for(int c = 0; c < length; c = c + 1){
		if(vert == 'h'){
			cout << symbol;
		}
		if(vert == 'v'){
			cout << symbol << endl;
		}
		if(vert == 'd'){
			across = across + 1;
			down = down + 1;
			gotoxy(across,down);
			cout << symbol << endl;
		}
	}


}
