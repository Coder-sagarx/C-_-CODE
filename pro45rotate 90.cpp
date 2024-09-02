#include<iostream>
using namespace std;
int main(){
int i,j,row=4,colm=4;
int arr[row][colm],ans[colm][row];        //rotate matrix
 
for(i=0;i<row;i++){
	for(j=0;j<colm;j++){
		cin>>arr[i][j];
	}}
	
	for(i=0;i<row;i++){
	for(j=0;j<colm;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;}
	cout<<endl;
	cout<<endl;
	
	for(i=0;i<colm;i++){
	for(j=0;j<row;j++){
	 ans[i][j]=arr[row-1-j][i];          ///very important step remember this
	}
	cout<<endl;}
	
	for(i=0;i<colm;i++){
	for(j=0;j<row;j++){
	 cout<<ans[i][j];
	}
	cout<<endl;}

	return 0;
}


