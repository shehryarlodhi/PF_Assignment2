//Muhammad Shehryar sajid Lodhi
//20i-1771
//Section-C
//question-8
//Assignment-2
#include<iostream>
using namespace std;
int main(){
	//declairing variables
	int updated_num,num,num1,num2,num3,num4,reversed_num;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter a four digit number : ";
	cin>>num;
	
	//using nested if statement
	
	num4=num%10;
	num4=num4*1000;
	updated_num=num/10;
	num=updated_num;
		if(num==updated_num){
		num3=num%10;
		num3=num3*100;
		updated_num=num/10;
		num=updated_num;
			if(num==updated_num){
			num2=num%10;
			num2=num2*10;
			updated_num=num/10;
			num=updated_num;
				if(num==updated_num){
				num1=num%10;
				updated_num=num/10;
				num=updated_num;
					}}}
			reversed_num=(num1+num2+num3+num4);
			cout<<"The Reversed number is    : "<<reversed_num<<endl;
			
			
			return 0;
			}
			
			
			
			
			
			
			
			
			
			
			
			
			
