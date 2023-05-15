//Muhammad Shahryar Sajid Lodhi
//20i-1771
//Section-C
//question-7
//Assignment-2
#include<iostream>
using namespace std;
int main(){
	//Declaring variables
	string health,place,gender;
	int age;
	
	//Asking user for input
	cout<<endl;
	cout<<"Enter person's health condition (excellent or poor) : ";
	cin>>health;
	cout<<"Enter person's age : ";
	cin>>age;
	cout<<"Enter where the person lives  (city or village) : ";
	cin>> place;
	cout<<"Enter person's gender (male or female) : ";
	cin>>gender;
	cout<<endl;
	
	//using if else if condition
	if((health=="excellent"||health=="poor")&&(place=="city"||place=="village")&&(gender=="male"||gender=="female")){
	
	if((health=="excellent")&&(age<=35&&age>=25)&&(place=="city")&&(gender=="male")){
		cout<<"The person is insured , his premium is Rs.4 per thousand"<<endl<<"and his policy amount cannot exceed Rs.2 lacs"<<endl;
		}
	else if((health=="excellent")&&(age<=35&&age>=25)&&(place=="city")&&(gender=="female")){
		cout<<"The person is insured , her premium is Rs.3 per thousand"<<endl<<"and her policy amount cannot exceed Rs.1 lac"<<endl;
		}
	else if((health=="poor")&&(age<=35&&age>=25)&&(place=="city")&&(gender=="male")){
		cout<<"The person is insured , his  premium is Rs.6 per thousand"<<endl<<"and his policy amount cannot exceed Rs.10,000"<<endl;
		}
	else{
		cout<<"The person is not insured"<<endl;
		}
		cout<<endl;
		}
	else{
	cout<<"Error..! Invalid input."<<endl;
	}
	cout<<endl;
	
	return 0;
	}
		
	
	
