#include<iostream>
using namespace std;
int main(){
int a,b;
a=4;
b=5;
cout<<"and"<<(a&b)<<endl;           //and
cout<<"or"<<(a|b)<<endl;           //or
cout<<"not"<<(~a)<<endl;           //not
cout<<"xnor"<<(a^b)<<endl;           //xnor
return 0;
}
