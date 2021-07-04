#include <iostream>
#include <conio.h>
#include <string>
 
using namespace std;
 
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_X 120
 
int main(){
 
    char key = getch();
    int value = key;
	int c = 0;
	
    cout << "Press any special keys: ";
    
	while(key != KEY_X)
	{
	    c = 0;
	if(key == 32 || key == -32 || key == 224){
		    switch((c=getch())) {
	        case KEY_UP:
	            cout << endl << "Up" << endl;//key up
	            break;
	        case KEY_DOWN:
	            cout << endl << "Down" << endl;   // key down
	            break;
	        case KEY_LEFT:
	            cout << endl << "Left" << endl;  // key left
	            break;
	        case KEY_RIGHT:
	            cout << endl << "Right" << endl;  // key right
	            break;
	   }
	}
	//printf("%d\n",key);
	switch(key){
		case 27:
			cout << endl << "Echap" << endl;
			break;
		case 59:
			cout << endl << "F1" << endl;
			break;
		case 60:
			cout << endl << "F2" << endl;
			break;
		case 61:
			cout << endl << "F3" << endl;
			break;
		case 62:
			cout << endl << "F4" << endl;
			break;
		case 63:
			cout << endl << "F5" << endl;
			break;
		case 64:
			cout << endl << "F6" << endl;
			break;
		case 65:
			cout << endl << "F7" << endl;
			break;
		case 66:
			cout << endl << "F8" << endl;
			break;
		case 67:
			cout << endl << "F9" << endl;
			break;
		case 68:
			cout << endl << "F10" << endl;
			break;
		case 13:
			cout << endl << "Enter" << endl;
		case 9:
			cout << endl << "Tabulation" << endl;
			break;
		case 8:
			cout << endl << "BackSpace" << endl;
			break;
	}
		key = getch();
		value = key;
	}	
	    
	system("pause");
	return 0;
}
