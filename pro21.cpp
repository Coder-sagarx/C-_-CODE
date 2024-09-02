#include<iostream>
using namespace std;
void swap(int arr[],int num);         //   swap in array in different method
int main(){
int i,num,arr[39];
cout<<"enter how many nu";
cin>>num;
for(i=0;i<num;i++){
	cin>>arr[i];
}
swap(arr,num);
cout<<"\n";
for(i=0;i<num;i++){
	cout<<arr[i];
}
	return 0;
}
void swap(int arr[],int num){
	int temp,i=0;
	for(i=0;i<num;i+=2){
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
}


