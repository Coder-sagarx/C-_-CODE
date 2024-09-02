#include<iostream>
using namespace std;
void rev(int n);
int main(){
int n;
cout<<"enter n  :";
cin>>n;
rev(n);
	return 0;
}
void rev(int n){
	if(n==3){
	return ;
	}
	cout<<" "<<n;           //tail recursive	
	rev(n-1);
	cout<<" "<<n;           //head recursive
}

