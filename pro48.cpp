#include<iostream>
using namespace std;
int main(){
int n,i,j;
cout<<"enter  n";
cin>>n;

int** arr=new int*[n];
for(i=0;i<n;i++){
 	arr[i]=new int[n];
}

//input
for(i=0;i<n;i++){
	for(j=0;j<n;i++){
		cin>>arr[i][j];
}	
}
//output
for(i=0;i<n;i++){
	for(j=0;j<n;i++){
		cout<<arr[i][j]<<" ";		
}
cout<<endl;	
}

for(i=0;i<n;i++){
	delete [] arr[i];
}
	return 0;
}


