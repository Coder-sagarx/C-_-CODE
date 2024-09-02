#include<iostream>
using namespace std;
int search(int num,int key,int arr[]);
int main(){
int c,index,arr[20],key,i,num;
cout<<"enter nu";
cin>>num;
for(i=0;i<num;i++){
	cin>>arr[i];
}
cout<<"enter the search element";
cin>>key;
index=search(num,key,arr);
if(c<0){
	printf("not found");
}
else{printf("found");
printf("%d",index);
}
	return 0;
}
int search(int num,int key,int arr[]){
	int i;
	for(i=0;i<num;i++){
		if(key==arr[i]){
			return i;
		}
	}
	return -1;
}


