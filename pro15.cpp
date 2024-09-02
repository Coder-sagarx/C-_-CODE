#include<iostream>
using namespace std;
int main(){
int i=0,num,m,mask=0;
cout<<"enter nu in decimal form";
cin>>num;
m=num;
if(num==0){
	cout<<1;
	return 0;
}
while(num!=0){

	mask=(mask<<1)|1;
    num=num>>1;
	
}
int ans=(~m)&mask;
	cout<<ans;
	return 0;
}


