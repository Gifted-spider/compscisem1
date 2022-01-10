// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char hol = '8';
	
	cout << "Write a holiday message!"<< endl;
	cin >> hol;
	
	for(int t = 0; t < 35; t++){
		gotoxy(1 + t,5);
		cout << "-";
	}
	
	char symbol = '*';
	
	//smol tree
	gotoxy(5,6);
	cout << "< >" << endl;
	for(int x = 0; x < 2; x++){
		gotoxy(5 + x,7);
		cout << "#";
	}
	for(int x = 0; x < 4; x++){
		gotoxy(4 + x,8);
		cout << "#";
	}
	for(int x = 0; x < 6; x++){
		gotoxy(3 + x,9);
		cout << "#";
	}
	for(int x = 0; x < 8; x++){
		gotoxy(2 + x,10);
		cout << "#";
	}
	gotoxy(5,11);
	cout << "||"<< endl;
	
	
	//big tree
	gotoxy(19,6);
	cout << "< >" << endl;
	gotoxy(19,7);
	cout << "##" << endl;
	gotoxy(18,8);
	cout << "####"<< endl;
	gotoxy(17,9);
	cout << "######"<< endl;
	gotoxy(16,10);
	cout << "########"<< endl;
	gotoxy(15,11);
	cout << "##########" << endl;
	gotoxy(13,12);
	cout << "#############" << endl;
	gotoxy(12,13);
	cout << "################" << endl;
	gotoxy(19,14);
	cout << "||"<< endl;
	
	
	//big box
	gotoxy(33,12);
	cout << "><" << endl;
	
	for(int y = 0; y < 4; y = y + 1){
		for(int x = 0; x < 9; x = x + 1){
			gotoxy(30+x,13+y);
			cout << ".";
		}
		cout << endl;
	}
	
	for(int y = 0; y < 2; y = y + 1){
		for(int x = 0; x < 7; x = x + 1){
			gotoxy(31+x,14+y);
			cout << "x";
		}
		cout << endl;
	}
	
	
	
	//smol present
	gotoxy(5,13);
	cout << "><" << endl;
	
	for(int y = 0; y < 3; y = y + 1){
		for(int x = 0; x < 6; x = x + 1){
			gotoxy(3+x,14+y);
			cout << "?";
		}
		cout << endl;
	}
	
	for(int y = 0; y < 1; y = y + 1){
		for(int x = 0; x < 4; x = x + 1){
			gotoxy(4+x,15+y);
			cout << " ";
		}
		cout << endl;
	}
	
	//sparklies
	for(int x = 0; x < 10; x++){
		gotoxy(20,8);
		cout << "0";
		sleep(1);
		gotoxy(20,8);
		cout << " " << endl;
		gotoxy(20,8);
		cout << "0";
		
		gotoxy(22,9);
		cout << "0";
		sleep(1);
		gotoxy(22,9);
		cout << " " << endl;
		gotoxy(22,9);
		cout << "0";
		
		gotoxy(18,10);
		cout << "0";
		sleep(1);
		gotoxy(18,10);
		cout << " " << endl;
		gotoxy(18,10);
		cout << "0";
		
		gotoxy(20,11);
		cout << "0";
		sleep(1);
		gotoxy(20,11);
		cout << " " << endl;
		gotoxy(20,11);
		cout << "0";
		
		gotoxy(18,12);
		cout << "0";
		sleep(1);
		gotoxy(18,12);
		cout << " " << endl;
		gotoxy(18,12);
		cout << "0";
		
		gotoxy(23,12);
		cout << "0";
		sleep(1);
		gotoxy(23,12);
		cout << " " << endl;
		gotoxy(23,12);
		cout << "0";
		
		gotoxy(16,13);
		cout << "0";
		sleep(1);
		gotoxy(16,13);
		cout << " " << endl;
		gotoxy(16,13);
		cout << "0";
		
		gotoxy(19,13);
		cout << "0";
		sleep(1);
		gotoxy(19,13);
		cout << " " << endl;
		gotoxy(19,13);
		cout << "0";
		
		gotoxy(24,13);
		cout << "0";
		sleep(1);
		gotoxy(24,13);
		cout << " " << endl;
		gotoxy(24,13);
		cout << "0";
		
		gotoxy(14,13);
		cout << "0";
		sleep(1);
		gotoxy(14,13);
		cout << " " << endl;
		gotoxy(14,13);
		cout << "0";
	}

}
