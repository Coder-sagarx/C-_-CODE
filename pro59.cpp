#include<iostream>
using namespace std;
void reverse(string str[],int i,int n);
void reverse(string str[],int i,int n){
	 
	if(i>n)return ;   //string is not used and swap functioin is not used
	str[i]=str[n];
	str[n]=ch;
 	cout<<"  "<<str<<endl;
	//recurseve call
	reverse(str,i++,n--);
}
int main(){
 	string str[5]={"hello"};
 	reverse(str,0,4);
 	cout<<"  "<<str<<endl;
	return 0;
}


