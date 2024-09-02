#include<iostream>
using namespace std;
int main(){
int arr[6]={2,3,4,5,9,1},key=1;   //wrong code not run
int ans=search(arr,6,key);
	if(ans){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}
bool search(int arr[],int n,int key);
bool search(int arr[],int n,int key){
	if(n==0)return false;
	if(arr[0] == key){
	return true;}
	//recursive call
	else{
	bool search(arr+1,n-1,key);
	}
	
}

