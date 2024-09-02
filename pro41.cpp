#include<iostream>
using namespace std;
int main(){
int ans=0,i,j;
char arr[40];
cout<<"enetr sentence";        //higest character count;
gets(arr);

for( i=0;arr[i]!='\0';i++){
	int count=0;
for(j=0;arr[j]!='\0';j++){
	if(i==j){
		continue;
	}
	if(arr[i]==arr[j]){
		count++;
		if(count>=ans){
			ans=i;
		}
	}
}	
}
cout<<"answer is  :"<<arr[ans]<<endl;

	return 0;
}


