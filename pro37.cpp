#include<iostream>
using namespace std;
int main(){

int i,arr[20],n,count=0;
cout<<"enter how namy nu";       //array is rotated or shorted
cin>>n;
for(i=0;i<n;i++){
	cin>>arr[i];
}
for(i=1;i<n;i++){
	if(arr[i-1]>arr[i]){
		count++;
	}
}
	if(arr[n-1]>arr[0]){
	count++;
	}
if(count==1){
	printf("true");
}
else{
	printf("false");
}
	return 0;
}


