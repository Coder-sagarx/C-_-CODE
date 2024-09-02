#include<iostream>
using namespace std;
int main(){
int i,a=0;
int b=1,n;
int nextnu;
cout<<"enter n";
cin>>n;
	cout<<a<<endl;
	cout<<b<<endl;
for(i=0;i<n;i++){
	nextnu=a+b;
	cout<<a+b<<endl;
	
	a=b;
	b=nextnu;
}
	return 0;
}


