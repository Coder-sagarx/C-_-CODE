	#include<iostream>
using namespace std;
int main(){
int i=0,j,k=0,count=0;           //reverse the word in a string  //not done//wrong
char temp,sen[40];
cout<<"enetr sentence";
gets(sen);

while(sen[k]!='\0'){
	while(sen[k]!=' '){
		count++;
		k++;
	}
	for(j=count;i<j;i++,j--){
		temp=sen[i];
		sen[i]=sen[j];
		sen[j]=temp;
	}
	i=count;
	k++;
}
for(i=0;sen[i]!='\0';i++){
		 cout<<sen[i];
	}
	cout<<endl;
	return 0;
}


