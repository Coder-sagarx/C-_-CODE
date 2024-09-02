#include<iostream>
using namespace std;
bool sort(int arr[],int n);
bool sort(int arr[],int n){
	for(int i=0;i<=n;i++){
	cout<<" "<<arr[i];
	}
	cout<<" "<<endl;
	if(n==0){
	return true;
	}
	if(arr[0]>arr[1])return false;
	//recursive call
	sort(arr+1,n-1);
}
int main(){
int arr[5]={1,2,3,4,5};
int ans=sort(arr,4);
cout<<endl;
if(ans){
cout<<"true";	
}
else{
	cout<<"false";
}
	return 0;
}


