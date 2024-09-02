#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,ans=0,rem,i=0;
	cout<<"enter num"<<endl;    //decimal to binary form
	cin>>n;
 
	 
	while(n!=0){
      int bit=n&1;
      if(bit==1){
      	ans= (bit*pow(10,i))+ans;
	  }
	   
	  i++;
	  n=n>>1;
	}
	
	
   cout<<ans;
	return 0;
}


