#include<iostream>
using namespace std;
void print(int num,string arr[]);
void print(int num,string arr[]){
	if(num==0)
	return ;
 	int rem=num%10;
	num=num/10;
	print( num,arr);
	cout<<arr[rem]<<" ";
}
int main(){
int num;
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
cout<<"enter nu  :";
cin>>num;
print(num,arr);
cout<<endl;
	
	return 0;
}


