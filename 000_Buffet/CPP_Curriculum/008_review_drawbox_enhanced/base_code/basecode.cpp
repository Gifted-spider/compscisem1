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
	

		for(int j = 0; j < hight; j = j + 1){
		gotoxy(x,y);
		for(int c = 0; c < width; c = c + 1){
			cout << symbol;
		}
		cout << endl;
	}
	
}
