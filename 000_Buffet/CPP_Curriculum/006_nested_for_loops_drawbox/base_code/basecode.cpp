// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char symbol = '*';
	int width = 0;
	int hight = 0;
	cout << "Please enter box width: ";
	cin >> width;
	cout << "Please enter border character: ";
	cin >> symbol;
	cout << "Please enter box hight: ";
	cin >> hight;

	for(int x = 0; x < hight; x = x + 1){
		for(int y = 0; y < width; y = y + 1){
			cout << symbol;
		}
		cout << endl;
	}
}
