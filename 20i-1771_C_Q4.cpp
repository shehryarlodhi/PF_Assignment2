//Muhammad Shehryar Sajid Lodhi
//20i-1771
//Section-C
//question-4
//Assignment-2
#include<iostream>
using namespace std;
int main(){
	//declairing variables
	int month,day;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter the month (1 for january , 2 for february and so on...) : ";
	cin>>month;
	cout<<"Enter the day (between 1 and 31): ";
	cin>>day;
	cout<<endl;
	
	//nested if and than else if statement
	if((month>=1&&month<=12)&&(day>=1&&day<=31)){
		if((month==12&&day>16)||(month==3&&day<=15)||(month==2&&day<=31)||(month==1&&day<=31)){
		cout<<"The season is : Winter"<<endl;
		}
		else if((month==3&&day>16)||(month==4&&day<=31)||(month==5&&day<=31)||(month==6&&day<=15)){
		cout<<"The season is : Spring"<<endl;
		}
		else if((month==6&&day>=16)||(month==7&&day<=31)||(month==8&&day<=31)||(month==9&&day<=15)){
		cout<<"The season is : Summer"<<endl;
		}
		else if((month==9&&day>=16)||(month==10&&day<=31)||(month==11&&day<=31)||(month==12&&day<=15)){
		cout<<"The season is : Fall"<<endl;
		}
	}
	else{
	cout<<"Invalid input..!,Month should be btween 1 to 12"<<endl<<"and day should be between 1 to 31. Compile code again"<<endl<<"and enter valid input."<<endl;
	}
	cout<<endl;
	
	return 0;
	}
	

