// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	cout << "How much money do you have to spend? $";
	double money = 0.00;
	cin >> money;
	
	//framedbox(1,4,13,30,'*');
	drawline(30,2,5,'_');
	drawbox(2,6,30,3,'#');
	framedbox(2,9,3,30,'*');
	framedbox(3,12,3,8,'.');
	framedbox(12,12,3,9,'.');
	framedbox(22,12,3,9,'.');
	gotoxy(5,13);
	cout << random(6);
	
	
	
	//gotoxy(10,10);
	//cout<<"This works!";
	//framedbox(12,12,8,10,'&');
	//drawbox(2,2,4,8,'^');
	//drawline(10,3,10,'$');

}
