#include<iostream>
using namespace std;
int power(int n);
int main(){
int n,ans;
cout<<"enter n  :";
cin>>n;
ans=power(n);
cout<<"ans is  :"<<ans<<endl;
	return 0;
}
int power(int n){
	if(n==0)
	return 1;
	int first=power(n-1);
	int secount=2*first;
	//return 2*power(n-1);  we also write 
}


