#include<iostream>
using namespace std;
int fact(int x){
  int fact=1;
  for(int i=1; i<=x; i++){
    fact=fact*i;
}
return fact;
}
int main(){
   int n;
   int r;
   cout<<"Enter a n:";
   cin>>n;
   cout<<"Enter a r:";
   cin>>r;
   int a=fact(n);
   int b=fact(n-r);
   cout<<a/b;
   return 0;
}
