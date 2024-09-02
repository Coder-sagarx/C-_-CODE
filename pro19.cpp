#include<iostream>
using namespace std;
int search(int arr[],int num,int temp[]);           //duplicate
int main(){
int num,arr[30],k,i,temp[40];
cout<<"enter nu";
cin>>num;
for(i=0;i<num;i++){
	 cin>>arr[i];
	}

k=search(arr,num,temp);
if(k>=0){
	printf("found");
printf("%d",arr[k]);  
}
else{
	printf("not found");
}
	return 0;
}
int search(int arr[],int num,int temp[]){
int i,j,k=-1;
for(i=0;i<num;i++){
	for(j=0;j<num;j++){
	  if(i==j){
 	continue;
 }
 else{
 	if(arr[i]==arr[j]){
 		 
		 k=i;
 	 return k;
	 }
 }
}
}
 
return k;	
}
/*class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int i,j,index,n=nums.size();
      for(i=0;i<n-1;i++){
          for(j=i+1;j<n;j++){
              if((nums[i]^nums[j])==0){
                  index= nums[i];}}}
    return index;
    }};*/


