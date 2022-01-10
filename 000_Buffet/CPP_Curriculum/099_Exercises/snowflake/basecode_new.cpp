// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char symbol = '*';
	
	cout<< "What do you want your snowflake to look like?: ";
	cin >> symbol;
	
	sleep(1);
	gotoxy(10,4);
	cout << symbol << endl;
	
	sleep(1);
	gotoxy(10,4);
	cout<< " " << endl;
	
	sleep(1);
	gotoxy(10,5);
	cout<< symbol << endl;
		
	sleep(1);
	gotoxy(10,5);
	cout<< " " << endl;
	
	sleep(1);
	gotoxy(10,6);
	cout<< symbol << endl;
	
	sleep(1);
	gotoxy(10,6);
	cout<< " " << endl;
	
	sleep(1);
	gotoxy(10,7);
	cout<< symbol<< endl;
	
	sleep(1);
	gotoxy(10,7);
	cout<< " "<< endl;
	
	sleep(1);
	gotoxy(10,8);
	cout<< symbol<< endl;
	
	sleep(1);
	gotoxy(10,8);
	cout<< " "<< endl;
	
	sleep(1);
	gotoxy(10,9);
	cout<< symbol<< endl;
	
	
	//for(int i = 1; i < 10; i++){
		//	gotoxy(10,3+i);
		//	cout << symbol;
	//}

}
