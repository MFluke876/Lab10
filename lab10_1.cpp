#include<iostream>
using namespace std;

int main(){
	char grade;
	int student = 0;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << student+1 << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		switch(grade){
			case 'A':
				count[0]++;
				student++;
				break;
			case 'B':
				count[1]++;
				student++;
				break;
			case 'C':
				count[2]++;
				student++;
				break;
			case 'D':
				count[3]++;
				student++;
				break;
			case 'F':
				count[4]++;
				student++;
				break;
			case '0':
				break;
			default:
				cout << "Wrong input. Please input again.\n";
		}
	}while(grade != '0');
	
	cout << "In total " << student <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];	
	//	and so on ... for grade = C, D, F	

	return 0;
}
