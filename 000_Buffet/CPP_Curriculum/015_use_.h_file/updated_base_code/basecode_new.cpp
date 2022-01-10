// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	//gotoxy(10,10);
	//framedbox(8,8,5,8,'&');
	for(int i = 0; i < 33; i = i + 5){
		drawbox(2,8 + i,10,4,'&');
		cout << endl;
	}
	//drawline(10,3,10,'$');

}
