#include<iostream>
using namespace std;
int primenu(int num);
int main(){
int num,p;
cout<<"ente a num";
cin>>num;
p=primenu(num);
if(p==0){
cout<<"it is a prime nu"<<endl;
}
else{
	cout<<"it is not a prime nu";
}
return 0;
}
int primenu(int num){
int i;
for(i=2;i<num;i++){
	if(num%i==0){
		return 0;
	}
}
return 1;	
}

