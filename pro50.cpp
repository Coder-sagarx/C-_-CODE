#include<iostream>
using namespace std;      //recursion
int factorial(int n);
int main(){
int n,ans;
cout<<"enter nu";
cin>>n;
ans=factorial(n);
cout<<" ans  :"<<ans<<endl;
	return 0;
}
int factorial(int n){
	if(n==0)
	return 1;
int	first=factorial(n-1);
int	secound=n*first;
}


