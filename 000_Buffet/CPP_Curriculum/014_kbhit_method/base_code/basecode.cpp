// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char qu = getch();
	
	while(kbhit() == 0){
		gotoxy(8,9);
		if(qu == 'q'){
			break;
		}
		cout << random(9);
	}

}
