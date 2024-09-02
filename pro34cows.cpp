#include<iostream>
using namespace std;
int ispossible(int arr[],int n,int mid,int k);
int main(){
int i,s=0,e,mid,n,arr[20],k=2,maxi=-1,temp,ans=-8;                  //program not rum because of sort ,all done
cout<<"enetr nu of distance :";
cin>>n;
for(i=0;i<n;i++){
	cin>>arr[i];
}
for(i=0;i<n;i++){
	maxi=max(maxi,arr[i]);
}
e=maxi;
for(i=0;i<n-1;i++){
	for(int j=i+1;j<n;j++){
		if(arr[i]<arr[j]){
		temp=arr[i];
 		arr[i]=arr[j];
        arr[j]=temp;	
		}
}
}
mid=s+(e-s)/2;
while(s<=e){
	if(ispossible(arr,n,mid,k)){
		ans=mid;
		s=mid+1;
	}
	else{
		e=mid-1;
	}
mid=s+(e-s)/2;	
}
cout<<"answer is   :"<<ans;
	return 0;
}

int ispossible(int arr[],int n,int mid,int k){
	int cowcount=1;
	int lastpos=arr[0];
	

	for(int i=0;i<n;i++){
	 
		if(lastpos-arr[i]>=mid){
			cowcount++;
			if(cowcount==k){
				return true; 
			}
			lastpos=arr[i];
		}
			
	}
	return false;
}

