#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int key);               //first and last occurance
int lastocc(int arr[],int n,int key);
int main(){
	int ans1,ans2 ,n,key,arr[20],i;
	cout<<"enter nu";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the value of key";
	cin>>key;
	
ans1= firstocc(arr,n,key);
cout<<"first index"<<ans1<<endl;
 ans2=lastocc(arr,n,key);
cout<<"secound index"<<ans2<<endl;
cout<<"nu of elements"<<(ans2-ans1)+1<<endl;
	return 0;
}
int firstocc(int arr[],int n,int key){
	int s=0,e=n-1,mid,ans;
	mid=s+(e-s)/2;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			e=mid-1;
		}
		if(key>arr[mid]){
			s=mid+1;
		}
		if(key<arr[mid]){
		e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int lastocc(int arr[],int n,int key){
	int s=0,e=n-1,mid,ans;
	mid=s+(e-s)/2;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			s=mid+1;
		}
		if(key>arr[mid]){
			s=mid+1;
		}
		if(key<arr[mid]){
		e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}


