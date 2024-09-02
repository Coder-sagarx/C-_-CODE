#include<iostream>
using namespace std;
int main(){
	vector<int>ans;
	int n,m,arr1[20],arr2[20],i=0,j=0,ans;           //wrong ans
cout<<"enter nu in first arr";
cin>>n;
for(i=0;i<n;i++){
	cin>>arr1[i];
}
cout<<"enter nu in  secound  arr";
cin>>m;
for(i=0;i<m;i++){
	cin>>arr2[i];
}
i=0,j=0;
while(i<n&&j<m){
	if(arr1[i]==arr2[j]){
		ans.push_back(arr1[i]);
		i++;
		j++;
	}
	else if(arr1[i]<arr2[j]){
		i++;
	}
	else{
		j++;
	}
}
	return 0;
}


