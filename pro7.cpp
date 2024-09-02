#include<iostream>
using namespace std;
int main(){
	int i;
	for(i=0;i<=15;i+=2){
		cout<<i<<endl;
		if(i&1){
			continue;
		}
		i++;
	}

	return 0;
}


