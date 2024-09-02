#include<iostream>
using namespace std;              //search in rotated array
int findpivot(int arr[],int nu);
int binarys(int arr[],int s,int e,int key);

int main(){
int i,arr[20],p;
int nu,key;
cout<<"enter nu  :";
cin>>nu;
for(i=0;i<nu;i++){
	cin>>arr[i];
}
p=findpivot(arr,nu);
cout<<"pivot is  :%d"<<p<<endl;
cout<<" give target  :"<<endl;
cin>>key;

if(arr[p]<=key<=arr[nu-1]){
	//binary search in secound line
	binarys(arr,p,nu-1,key);
}
else{
	binarys(arr,0,p-1,key);
}
	return 0;
}

int findpivot(int arr[],int nu){
	int e=nu-1,s=0;
	int mid=s+(e-s)/2;
	while(s<e){
		if(arr[mid]>=arr[0]){
			s=mid+1;
		}
		else{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	return s;
}

int binarys(int arr[],int s,int e,int key){
 
	int mid=s+(e-s)/2;
	while(s<=e){
		if(arr[mid]==key){
			printf("index of key   :%d ",mid);
			return 0;
		}
		else if(key>arr[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
		printf("not found  ");
		return 0;
}
