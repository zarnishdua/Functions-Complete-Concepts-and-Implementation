#include<iostream>
using namespace std;
float per( float obtained_marks, float total_marks){
return 	(obtained_marks/total_marks)*100;
}
int main(){
	float total_marks;
	int a;
	int n =1;
	float obtained_marks=0;
	for(int i=1; i<=5; i++){
		cout<<"Enter the  marks of subject " <<n<<" :-";
		n=n+1;
		cin>>a;
		if(a<0 || a>100){
			cout<<"Invalid subject marks "<<endl;
			return 0;
		}
       obtained_marks=obtained_marks+a;
       if(a<40){
			cout<<"Fail"<<endl;
		return 0;
	}
	}
	cout<<"Enter your total marks :";
	cin>>total_marks;
	if(total_marks<=0 || total_marks>500){
	cout<<"Invalid total marks ";
	return 0;
}
	cout<<per(obtained_marks,total_marks)<<"%";

}
