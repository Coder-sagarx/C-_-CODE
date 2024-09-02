#include<iostream>
using namespace std;
bool ispossible(int arr[],int n,int mid,int k );
int main(){
//book allocation
int i,s=0,sum=0,n,k,ans=-1,arr[20];
cout<<"enetr nu of books  :";
cin>>n;
for(i=0;i<n;i++){
	cin>>arr[i];
}
for(i=0;i<n;i++){
	sum=sum+arr[i];
}
cout<<"total sum :"<<sum;
cout<<"enter the nu of student :";
cin>>k;
int e=sum;
int mid=s+(e-s)/2;
while(s<=e){
	if(ispossible(arr,n,mid,k)){         //k=nu of student
		ans=mid;
		e=mid-1;
	}
	else{
	s=mid+1;
	}
	mid=s+(e-s)/2;
}
cout<<"\n";
cout<<"answer is  :"<<ans<<endl;

	return 0;
}
bool ispossible(int arr[],int n,int mid,int k ){
   
	int stdcount=1,i;
    int pagesum=0;
	for(i=0;i<n;i++){
	 
		if(pagesum+arr[i]<=mid){
			pagesum+=arr[i];
		}
		else{
			stdcount++;
			if(stdcount>k||arr[i]>mid){
				return false;
			}
			pagesum=0;
			pagesum+=arr[i];
		}
		
		}
	return true;
}












