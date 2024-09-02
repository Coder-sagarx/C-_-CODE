#include<iostream>
using namespace std;
int sum(int arr[],int n );
int  sum(int arr[],int n ){
	for(int i=0;i<=n;i++){
	cout<<" "<<arr[i];
	}
	cout<<" "<<endl;
	if(n==0)return 0;
	if(n==1)return arr[0];
	
		//recursive call
	int ok=sum(arr+1,n-1);
	int add=arr[0]+ok;
}
int main(){
int arr[5]={1,2,3,4,5} ;
int ans=sum(arr,5);
cout<<endl;
cout<<"sum is  :"<<ans<<endl;
	return 0;
}
