//Muhammad Shehryar Sajid Lodhi
//20i-1771
//Section-C
//question-3
//Assignment-2
#include<iostream>
using namespace std;
int main(){
	//declairation
	int distance;
	double cost;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter distance : ";
	cin>>distance;
	cout<<endl;
	
	//using if else if statement
	if(distance>=0&&distance<=100){
	cost=5.00;
	cout<<"  	Distance           cost"<<endl;
	cout<<"0 through 100 :		     "<<cost<<endl;
	}
	else if(distance>100&&distance<=500){
	cost=8.00;
	cout<<"  		Distance          		 cost"<<endl;
	cout<<"more than 100 but not more than 500 :		 "<<cost<<endl;
	}
	else if(distance>500&&distance<=1000){
	cost=10.00;
	cout<<" 		Distance          		  cost"<<endl;
	cout<<"more than 100 but not more than 500 :		  "<<cost<<endl;
	}
	
	else if(distance>=1000){
	cost=12.00;
	cout<<"   Distance	 cost"<<endl;
	cout<<"More than 1000 : "<<cost<<endl;
	}
	else{
	cout<<"Invalid input...!"<<endl<<"Please enter a positive number."<<endl;
	}
	cout<<endl;
	
	return 0;
	}
