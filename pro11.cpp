#include<iostream>
using namespace std;
int main(){
//reverse integer
int n,sum=0,rem;
cout<<"enter nu";
cin>>n;
 
while(n!=0){
    rem=n%10;
     
	sum=sum*10+rem;
	n=n/10;
}
cout<<sum;
	return 0;
}


