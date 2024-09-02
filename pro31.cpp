#include<iostream>
using namespace std;
int main(){

int i,s=1,e,nu;
long long int ans;
cout<<"enter nu";
cin>>nu;
e=nu;
long long int mid=s+(e-s)/2;
while(s<=e){
 
	long long int ok=mid*mid;
	if(ok==nu){
		 ans=mid;
		break;
	}
	else if(ok<nu){
		ans=mid;
		s=mid+1;
	}
	else{
		e=mid-1;
	}
 	mid=s+(e-s)/2;
}

printf("answer is   :%d",ans);
	return 0;
}


