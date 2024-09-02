#include<iostream>
using namespace std;
int main(){
int num,ans=0,digit;
//reverse integer
cout<<"enter num  :";
cin>>num;
while(num!=0){
	digit=num%10;
	if(ans>INT_MAX/10||ans<INT_MIN/10){
		cout<<"answer is zero"<<endl;
		return 0;
	}
	ans=ans*10+digit;
	num=num/10;
	
}
cout<<ans;
	return 0;
}


