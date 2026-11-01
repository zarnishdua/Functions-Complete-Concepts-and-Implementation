#include<iostream>
using namespace std;
  void balance(int amount, int  withdrawal){
	if(withdrawal>500 && withdrawal<=amount){
	cout<<"==============================="<<endl;
	cout<<"your total amount is "<<amount<<endl;
	cout<<"Your withdrawal is "<<withdrawal<<endl;
	cout<<"Withdrawal successful !"<<endl;
	int balance=amount-withdrawal;
	cout<<"Your balance is "<<balance<<endl;
	cout<<"================================";
}
}
int main(){
	long int amount;
	cout<<"Enter amount available in your account: ";
	cin>>amount;
	int withdrawal;
	cout<<"Enter your withdrawal amount :";
	cin>>withdrawal;
    balance(amount, withdrawal);
return 0;		
}
