#include<iostream>
using namespace std;
bool ser(int arr[],int k,int s,int e);
bool ser(int arr[],int k,int s,int e){        //search by recursion
for(int i=s;i<e;i++){
	cout<<" "<<arr[i];
}
cout<<endl;
	if(s>e)return false;
	int mid=s+(e-s)/2;
	
	if(arr[mid]==k){
		return true;
	}
	if(k>arr[mid]){
		ser(arr,k,mid+1,e);
	}
	else {
	ser(arr,k,s,e=mid);
	}
}
int main(){
int arr[10]={3,4,5,6,7,55,67,69,79,89};
bool ans=ser(arr,89,0,10);
	if(ans){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}


