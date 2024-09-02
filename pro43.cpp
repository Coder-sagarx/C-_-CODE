#include<iostream>
using namespace std;
int main(){
int arr[3][4],i,j,sum[3],ans[4],index;             //matrix;

for(i=0;i<3;i++){
	for(j=0;j<4;j++){
	cin>>arr[i][j];
}
}
	for(i=0;i<3;i++){
	for(j=0;j<4;j++){
	cout<<arr[i][j]<<" ";
}
cout<<endl;
}
for(i=0;i<3;i++){
	sum[i]=0;
	for(j=0;j<4;j++){
	sum[i]=sum[i]+arr[i][j];
}
cout<<endl;
}
int maxi=-1;
for(i=0;i<3;i++){
	maxi=max(maxi,sum[i]);
}
cout<<maxi<<" ";

for(i=0;i<4;i++){
	ans[i]=0;
	for(j=0;j<3;j++){
	ans[i]=ans[i]+arr[i][j];
}
cout<<endl;
}
int ok=INT_MIN;
for(i=0;i<4;i++){
	 if(ok<ans[i]){
	 	ok=ans[i];
	 	index=i;
	 }
}
cout<<ok<<" ";
cout<<index<<" ";
	return 0;
}





