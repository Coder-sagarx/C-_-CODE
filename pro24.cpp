#include<iostream>
using namespace std;
int main(){
int i,j,n,k,target,arr[20];
cout<<"enter nu";
cin>>n;                                        //tripple sum
for(i=0;i<n;i++){
	cin>>arr[i];
}

cout<<"enter target";
cin>>target;

for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		for(k=j+1;k<n;k++){
			if(arr[i]+arr[j]+arr[k]==target){
				
				printf("the index nu are  :%d  %d  %d",i,j,k);
			}
		}
	}
}


	return {};
}


