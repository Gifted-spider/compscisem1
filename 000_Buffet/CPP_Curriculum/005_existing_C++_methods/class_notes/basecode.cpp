// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	for(int i = 0; i < 5; i++){
		
	for(int i = 0; i < 5; i++){
		gotoxy(5 + i, 6 + i);
		cout << '%' << endl;
	}
	}
	
}
