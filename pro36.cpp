#include<iostream>
using namespace std;
int main(){
int n,i,arr1[20],arr2[20];
cout<<"enter how namy nu";        //rotate array
cin>>n;
for(i=0;i<n;i++){
	cin>>arr1[i];
}
int k=2;
for(i=0;i<n;i++){
	arr2[(i+k)%n]=arr1[i];
}
for(i=0;i<n;i++){
	cout<<arr2[i];
}


	return 0;
}


