#include<iostream>
using namespace std;
int unique(int arr[],int num);
int main(){
    //unique element
 int num,i,arr[20],ans;
cout<<"enter how many nu";
cin>>num;
for(i=0;i<num;i++){
	cin>>arr[i];
}
ans=unique(arr,num);
 cout<<ans;
	return 0;
}
int unique(int arr[],int num){
	int i,j,ans=0;
	for(i=0;i<num;i++){
	 ans=arr[i]^ans;	
	}
	 
 return ans;
}

/* int i,n=nums.size(),j,k,index,p;
        if(n==1){
            index=nums[n];
        return index;
        }
        for(i=0;i<n-1;i++){
            k=0;
            for(j=0;j<n;j++){
                if(nums[i]!=nums[j]){
                    if(k==n-2){
                        index=nums[i];
                        break;
                    }
                    k++;
                }
            }
        }
        return index;*/

