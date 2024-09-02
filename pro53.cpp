#include<iostream>
using namespace std;
int fibo(int i);
int fibo(int i){
	if(i==0)return 0;
	if(i==1)return 1;
	int next=fibo(i-1)+fibo(i-2);
	 
}
int main(){
int i;
cout<<"enter nu  :";
cin>>i;
int ans=fibo(i);
cout<<"ans is  :"<<ans;
	return 0;
}


