#include<iostream>
using namespace std;
int main(){
int i,arr1[20],arr2[20],arr3[20],carry=0,k=0,n,m,j,sum;            //sum of two array
cout<<"enetr nu of n";
cin>>n;

for(i=0;i<n;i++){
	cin>>arr1[i];
}
cout<<"enetr nu of m";
cin>>m;

for(i=0;i<m;i++){
	cin>>arr2[i];
}
i=n-1,j=m-1;
while(i>=0&&j>=0){
	sum=arr1[i]+arr2[j]+carry;
	carry=sum/10;
	arr3[k]=sum%10;
	k++;
	j--;
	i--;
}
while(i>=0){
	sum=arr1[i]+carry;
	carry=sum/10;
	arr3[k]=sum%10;
	i--;
	k++;
}
while(j>=0){
	sum=arr1[j]+carry;
	carry=sum/10;
	arr3[k]=sum%10;
	j--;
	k++;
}
while(carry!=0){
	sum=carry;
	carry=sum/10;
	arr3[k]=sum%10;
	k++;
}

 
for(i=0;i<4;i++){
	cout<<arr3[i];
}
	return 0;
}


