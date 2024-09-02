#include<iostream>
using namespace std;
int main(){
char name[20],n=0,i=0,j,count;          //check palindrome 
cout<<"enetr name";
cin>>name;
while(name[i]!='\0'){
	n++;
	i++;
}
for(i=0,j=n-1;i<j;i++,j--){
	if(name[i]!=name[j]){
		count++;
	}
}

if(count>0){
	printf("false");
}

else{
	printf("true");
}

	return 0;
}


