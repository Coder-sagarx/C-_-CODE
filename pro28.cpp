#include<iostream>
using namespace std;
int peak(int arr[],int n);
int main(){
int i,ans,arr[100],n;
cout<<"enter nu  :";
cin>>n;
for(i=0;i<n;i++){
	cin>>arr[i];
}
ans=peak(arr,n);
cout<<"peak value is   :"<<ans;

	return 0;
}
int peak(int arr[],int n){
	int s=0,e=n-1;
	int mid=s+(e-s)/2;
	while(s<e){
		if(arr[mid]<arr[mid+1]){
			s=mid+1;
		}
		else{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	 
	return s;
}


