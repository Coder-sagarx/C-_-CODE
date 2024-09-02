#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i=0,rem=0,ans=0 ;
	cout<<"enter num in binary form  :"<<endl;         //binary to decimal
	cin>>n;
    while(n!=0){
    	rem=n%10;
    	if(rem&1){
    	ans=ans+pow(2,i);
    		
		}
		n=n/10;
		i++;
	}
    cout<<ans;
   
	return 0;
}


