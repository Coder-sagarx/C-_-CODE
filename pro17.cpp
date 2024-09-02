#include<iostream>
using namespace std;
int factorial(int n);
int ncr(int r,int n);
int main(){
int n,r;
cout<<"enter n and r   :";
cin>>n;
cin>>r;
cout<<endl;

cout<<"answer is "<<ncr(r,n)<<endl;
	return 0;
}
int factorial(int n){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}

int ncr(int r,int n){
	int num,deno;
	num=factorial(n);
	deno=factorial(r)*factorial(n-r);
	return num/deno;
}


