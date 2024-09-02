#include<iostream>
using namespace std;
int main(){
int nu,i,arr[20],ok[20],ans=-1;

cout<<"enter nu"<<endl;
cin>>nu;
for(i=0;i<nu;i++){
	cin>>arr[i];
}
// method 1
//for(i=0;i<nu;i++){                //   for shorting
// ok[i]=min(ans,arr[i]);
//}

// method 2
                                           
//sort(arr.begin(),arr.end());                  //short form of swap swap(arr[],arr1[]);

// method 3

//for(i=0;i<n;i++){
//	min=i;
//	for(j=i+1;j<n;j++){
//		if(arr[j]<arr[min]){
//			min=j;
//		}
//		swap(arr[min],arr[i]);
//	}	
//}

// method 4

//for(i=0;i<n;i++){
//temp=arr[i];
//int j=i-1;
//for(;j>0;j--){
//	if(temp<arr[j]){
//		arr[j+1]=arr[j];
//	}
//	else{
//		break;
//	}
//}
//arr[j+1]=temp;
//}


for(i=0;i<nu;i++){
	cout<<arr[i];
}

	return 0;
}


