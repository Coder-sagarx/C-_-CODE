#include<iostream>
using namespace std;
int main(){

char name[5];
int i,j,count=0,n=0;
cout<<"enter name";
cin>>name;
for(i=0;name[i]!='\0';i++){
n++;
}
	cout<<" "<<n<<endl;
	
for(i=0;name[i]!='\0';i++){
	for(j=0;name[j]!='\0';j++){
		if(i==j)
		continue;
		if(name[i]!=name[j]){
			if(count==5-1){
				cout<<" "<<name[i];
				count++;
			}
		}
		
		
		else{
			break;
		}}}
	return 0;
}


