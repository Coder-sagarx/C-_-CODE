#include<iostream>
using namespace std;
int main(){

int i,j,arr1[20],arr2[20],arr3[40],k=0,n=4,m=3;
 
cout<<"enter nu";
for(i=0;i<n;i++){
	cin>>arr1[i];
}
cout<<"enter nu";
for(j=0;j<m;j++){
	cin>>arr2[j];
}
while(i<n&&j<m){
	if(arr1[i]<arr2[j]){
		arr3[k]=arr1[i];
		i++;
		k++;
	}
	if(arr1[i]>arr2[j]){
		arr3[k]=arr1[j];
		j++;
		k++;
}
}
k=arr3.size();
while(i<n){
	arr3[k]=arr1[i];
	i++;
	k++;
}
while(j<n){
	arr3[k]=arr2[j];
	j++;
	k++;
}
cout<<"arr thirld  element";
for(i=0;i<n+m;i++){
	cout<<arr3[i];
}
	return 0;
}


