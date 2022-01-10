// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char box = '*';
	char sign = 'x';
	char add = '+';
	char sub = '-';
	char mult = '*';
	char divi = '/';
	int num_1 = 0;
	int num_2 = 0;
	
		cout << "Please enter a character: ";
		cin >> box;
		cout << "Input your first number: ";
		cin >> num_1;
		cout << "Input the sign: ";
		cin >> sign;
		cout << "Input your second number: ";
		cin >> num_2;
		
		
		for(int c = 0; c < 17; c = c + 1){
				gotoxy(c + 20, c + 10);
				cout << box;
			}
		cout << endl;
		for(int i = 0; i < 6; i = i + 1){
				gotoxy(20, i + 10);
				cout << box << endl;
			}
		for(int p = 0; p < 7; p = p + 1){
				gotoxy(37, p + 1);
				cout << box << endl;
		}
		for(int h = 0; h < 18; h = h + 1){
			gotoxy(h + 20, h + 20);
			cout << box;
		}
		
		
  
  if(sign == add){
    int ans = num_1 + num_2;
    gotoxy(23,4);
    cout << num_1 << " + " << num_2 << " = " << ans<< endl;
  }
  else if(sign == sub){
    int ans = num_1 - num_2;
    gotoxy(23,4);
    cout << num_1 << " - " << num_2 << " = " << ans << endl;
  }
  else if(sign == mult){
    int ans = num_1* num_2;
    gotoxy(23,4);
    cout << num_1 << " * " << num_2 << " = " << ans << endl;
  }
  else if(sign == divi){
    int ans = num_1/ num_2;
    gotoxy(23,4);
    cout << num_1 << " / " << num_2 << " = " << ans<< endl;
  }

}
