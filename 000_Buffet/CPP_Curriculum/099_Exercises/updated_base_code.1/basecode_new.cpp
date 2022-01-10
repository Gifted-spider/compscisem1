// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	gotoxy(16,3);
	for(int i = 0; i < 6; i++){
		cout << '_';
	}
	gotoxy(15,4);
	cout << '/';
	gotoxy (22,4);
	cout <<'\\';
	gotoxy(9,5);
	for(int c = 0; c < 21; c++){
		cout << '_';
	}
	gotoxy(14,5);
	cout<< '/';
	gotoxy(23,5);
	cout<< '\\';
	gotoxy(9,6);
	for(int c = 0; c < 21; c++){
		cout<< '_';
	}
	gotoxy(8,6);
	cout << '|';
	gotoxy(30,6);
	cout << '|';
	gotoxy(8,7);
	cout <<'/';
	gotoxy (15,7);
	cout << '/';
	gotoxy(13,7);
	cout << '\\';
	gotoxy(23,7);
	cout << '\\';
	gotoxy(25,7);
	cout << '/';
	gotoxy(30,7);
	cout << '\\';
	gotoxy(8,8);
	cout << '|';
	gotoxy(14,8);
	cout << '/';
	gotoxy(17,8);
	cout << '0';
	gotoxy(19,8);
	cout << '_';
	gotoxy(20,8);
	cout << '_';
	gotoxy(22,8);
	cout <<'\\';
	gotoxy(23,8);
	cout << '\';
	
}


//                 ______
//                /      \
//     	   ______/________\______
//        |______________________|
//        /    \ /        \/    \
//        |     /  0 __ 0  \    |
//	  ___ |     \    \/    /    | ___ 
//   /   \	     \        /      /   \
//   \           /        \          /
//    \         /          \        /
//     \ 	   /            \      /
//      \     /              \    /
//       \   |                |  / 
//        \  |                | /
//         \ |                |/
//            \              /
//             \____________/