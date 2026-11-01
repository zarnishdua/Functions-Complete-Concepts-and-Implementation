#include<iostream>
using namespace std;
int bill(int units){
	if( units>=0 && units<=100){
		return units*10;
	}
	else if(units>100  && units<=200){
		return 1000+(units-100)*20;
	}
	else if(units >200 && units<=300){
		return  3000+(units-200)*30;
	}
	else{
		return  6000+(units-300)*40;
	}
}
int main(){
	int units;
	cout<<"Enter your units:";
	cin>>units;
	if(units<0)
	cout<<"invalid units ";
cout<<"bill is "<<bill(units);
}
