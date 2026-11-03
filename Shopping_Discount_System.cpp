#include<iostream>
using namespace std;
 void discount( float total_bill){
 	cout<<"The total fill before discount is "<<total_bill<<endl;
 	float discount=0;
 	if(total_bill>=20000){
 		discount=(total_bill*40)/100;
 		total_bill=total_bill-discount;
 		cout<<"The discount is "<<discount<<endl;
 		cout<<"The total bill  after discount is "<<total_bill;
	 }else if(total_bill>=10000){
 		discount=(total_bill*20)/100;
 		total_bill=total_bill-discount;
 		cout<<"The discount is "<<discount<<endl;
 		cout<<"The total bill  after discount is "<<total_bill;
	 }else{
 		discount=0;
 		cout<<"The discount is "<<discount<<endl;
 		cout<<"The final bill is "<<total_bill<<endl;
	 }
	 
 }
int main(){
	long int price;
	float total_bill=0;
	int a=1;
	for(int i=1; i<=5; i++){
		cout<<"Enter the price of product "<<a<<" :";
		cin>>price;
		if(price<0){
	cout<<"Invalid input  negative value not allowed "<<endl;
	return 0;
     }
		a=a+1;
		total_bill=total_bill+price;
	}
	discount(total_bill);
	return 0;
}
