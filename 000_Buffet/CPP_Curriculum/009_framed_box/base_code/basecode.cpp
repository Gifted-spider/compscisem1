// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char symbol = '*';
	int hight = 0;
	int width = 0;
	int x = 1;
	int y = 1;
	cout << "Please enter box hight: ";
	cin >> hight;
	cout << "Please enter border symbol: ";
	cin >> symbol;
	cout << "Please enter box width: ";
	cin >> width;
	
		
		for(int x = 0; x < width; x = x + 1){
			cout << symbol;
		}
		cout << endl;
		for(int i = 0; i < hight; i = i + 1){
			gotoxy(x, 5 + i);
			cout << symbol << endl;
		}
		for(int i = 0; i < hight; i = i + 1){
			gotoxy(x + width, 5 + i);
			cout << symbol << endl;
		}
		for(int h = 0; h < width; h = h + 1){
			gotoxy(x, y + hight);
			cout << symbol;
		}
		cout << endl;
}
