#include<iostream>
using namespace std;
int main(){
int i,j,r=3,c=4;
int arr[r][c];
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
	cin>>arr[i][j];
}
}
	for(i=0;i<3;i++){
	for(j=0;j<4;j++){
	cout<<arr[i][j]<<" ";
}
cout<<endl;
}

for(i=0;i<c;i++){
	if(1&i){
	for(j=r-1;j>=0;j--){
		cout<<arr[j][i];
	}
	}
	else{
			for(j=0;j<r;j++){
			cout<<arr[j][i];
		}
	}
}

	return 0;
}


