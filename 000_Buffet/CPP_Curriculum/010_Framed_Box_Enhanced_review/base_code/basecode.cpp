// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char symbol = '*';
	int hight = 0;
	int width = 0;
	int x = 0;
	int y = 0;
	cout << "Please enter box hight: ";
	cin >> hight;
	cout << "Please enter border symbol: ";
	cin >> symbol;
	cout << "Please enter box width: ";
	cin >> width;
	cout << "Please enter box x coordinate: ";
	cin >> x;
	cout << "Please enter box y coordinate: ";
	cin >> y;
	
	for(int c = 0; c < width; c = c + 1){
				gotoxy(x+ c, y);
				cout << symbol;
			}
		cout << endl;
		for(int i = 0; i < hight; i = i + 1){
				gotoxy(x, y + i);
				cout << symbol;
			}
		for(int i = 0; i < hight; i = i + 1){
				gotoxy(width + width, y + i);
				cout << symbol;
		}
		for(int h = 0; h < width; h = h + 1){
			gotoxy(x + h, hight + hight);
			cout << symbol;
		}
		
		gotoxy(1,50);
		cout << endl;
	
}
