#include<iostream>
#include<math.h>
using namespace std;
int main(){
int i=0,num,ans;
cout<<"enter nu";             //perfect square of two
cin>>num;
for(i=0;i<=30;i++){
    if(ans==num){
		cout<<"true";
	return 0;
	}
	if(ans<INT_MAX/2){
	ans=ans*2;
	}
}
cout<<"false";
	return 0;
}


