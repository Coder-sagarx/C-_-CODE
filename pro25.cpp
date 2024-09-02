#include<iostream>
using namespace std;
int main(){
int i,right,left=0,temp,arr[20],n;

cout<<"enter how many nu";           //short 0 and 1
cin>>n;
for(i=0;i<n;i++){
	cin>>arr[i];
}
right=n;
while(left<right){
	if(arr[left]==0&&left<right){
		left++;
	}
	if(arr[right]==1&&left<right){
		right--;
	}
	if(arr[right]==0&&arr[left]==1&&left<right){
		temp=arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
		left++;
		right--;
	}
	
}
for(i=0;i<n;i++){
	cout<<arr[i]<<"  ";
}

	return 0;
}


