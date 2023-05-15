//Muhammad Shahryar Sajid Lodhi
//20i-1771
//Section-C
//question-9
//Assignment-2
#include<iostream>
using namespace std;
int main(){
	//Declaring variables
	double hardness,tensile_strength,carbon_content;
	
	//Asking user for input
	cout<<endl;
	cout<<"Provide hardness of the steel : ";
	cin>>hardness;
	cout<<"Provide carbon content of the steel : ";
	cin>>carbon_content;
	cout<<"Provide tensile strength of the steel : ";
	cin>>tensile_strength;
	cout<<endl;
	//using if else if statement
	if(hardness>50&&carbon_content<0.7&&tensile_strength>5600){
		cout<<"The grade of steel is : 10"<<endl;
		}
	else if(hardness>50&&carbon_content<0.7&&tensile_strength<=5600){
		cout<<"The grade of steel is : 9"<<endl;
		}
	else if(hardness<=50&&carbon_content<0.7&&tensile_strength>5600){
		cout<<"The grade of steel is : 8"<<endl;
		}
	else if(hardness>50&&carbon_content>=0.7&&tensile_strength>5600){
		cout<<"The grade of the steel is : 7"<<endl;
		}
	else if(hardness>50||carbon_content<0.7||tensile_strength>5600){
		cout<<"The grade of the steel is : 6"<<endl;
		}
	else{
		cout<<"The grade of the steel is : 5"<<endl;
		}
		
		cout<<endl;
		
	return 0;
	}
		
	
	
