#include<iostream>
using namespace std;              //sqrt
int main(){ 
int ok;
 
double j;
float ans,num,i;

cout<<"enter nu   :";
cin>>num;
 cout<<endl;

while(ok==num){
 for(i=1;i<num/2;i++){
 	for(j=.0;j<=.9;j=j+0.1){
 	 
 			ans=i+j;
 			ok=ans*ans;
 			if(ok==num){
 			cout<<"ans is "<<ans;
				return 0;
			 }
		 
	 }
 }
}
	return 0;
}


