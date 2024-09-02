#include<iostream>
using namespace std;
int main(){

int i=10,*p1,**p2,***p3;

p1=&i;
p2=&p1;
p3=&p2;
cout<<" ans  :"<<i<<endl;
cout<<" ans  :"<<&i<<endl;

cout<<" ans  :"<<*p1<<endl;
cout<<" ans  :"<<&p1<<endl;
cout<<" ans  :"<<p1<<endl;
cout<<endl;
cout<<endl;
cout<<" ans  :"<<**p2<<endl;
cout<<" ans  :"<<*p2<<endl;
cout<<" ans  :"<<&p2<<endl;
cout<<" ans  :"<<p2<<endl;
cout<<endl;
cout<<" ans  :"<<**p3<<endl;
cout<<" ans  :"<<*p3<<endl;
cout<<" ans  :"<<&p3<<endl;
cout<<" ans  :"<<p3<<endl;
 


	return 0;
}


