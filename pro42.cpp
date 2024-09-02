#include<iostream>
using namespace std;
char get(string s);
int main(){
char s[20];
char ans;
cout<<"enter string";                  //  hight character count//right program but not run
gets(s);

ans=get(s);
cout<<"answer is   :"<<ans<<endl;
	return 0;
}
char get(string s){
	int arr[26]={0},i=0;
	
	while(s[i]!='\0'){
		int nu =0;
		char ch;
	
		ch=arr[i];
		nu=arr[i]-'a';
		arr[nu]++;
		i++;
	}
	int maxi=-1;
	for(i=0;i<26;i++){
		if(arr[i]>maxi){
			maxi=i;
		}
	}
	return maxi+'a';
}






