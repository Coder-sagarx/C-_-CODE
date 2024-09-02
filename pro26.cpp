#include<iostream>
using namespace std;
int search(int arr1[],int n,int key);
int main(){
int  index;

int arr1 [6] ={1,3,5,7,9,11};
int arr2 [5] ={2,4,6,8,9};

index=search(arr1,6,11);
cout<<"index of 5  :"<<index;

	return 0;
}
int search(int arr1[],int n,int key){
	int start=0,end=n-1;
	int mid=(start+end)/2;
	while(start<end){
		
		if(arr1[mid]==key){
			return mid;
		}
		if(arr1[mid]>key){
			end=mid-1;
		 
		}
		if(arr1[mid]<key){
			start=mid+1;
			 
		}
		mid=(start+end)/2;
	}
	return -1;
}

