#include<iostream>
using namespace std;
int waiting_fare(int time){
	if(time>=0 && time<5){
		return 0;
	}
  else	if(time>=5 && time<=9){
		return time*10;
	}
	else{
		return time*20;
	}
}
int distance_fare(int distance){
 	if(distance>=1 && distance<=3){
 	 return distance*100;
 }
 else if(distance>3 && distance<=5){
 	return 300+(distance-3)*200;
 }
 else {
 	return 500+(distance-5)*300;
 }
}
int main(){
	int total_fare;
	int distance;
	cout<<"Enter your distance in kilometer:";
	cin>>distance;
	int time;
	cout<<"Enter your waiting time in minutes :";
	cin>>time;
	if(time<0){
		cout<<"invalid input ";
	}
	cout<<"The distance fare is "<<distance_fare(distance)<<endl;
	if(distance<=0){
		cout<<"invalid input ";
	}
	cout<<"The waiting time fare is "<<waiting_fare(time)<<endl;
	int fare_1=distance_fare(distance);
	int fare_2=waiting_fare(time);
	total_fare=fare_1+fare_2;
	cout<<"The total fare is "<<total_fare;
	return 0;
}
