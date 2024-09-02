#include<iostream>
using namespace std;

class ok{
	private:
	int helth;
	char level;
	public:
	string name;
	void print(){
		cout<<" helth  :"<<helth<<endl;
		cout<<" name  :"<<name<<endl;
		cout<<" level  :"<<level<<endl;
	}
	//for setting the value of helth
	void sethelth(int k){
	 helth=k;
	}
	
	void setlevel(char l){
	 level=l;
	}
		//for return the value of helth in main function
	int gethelth(){
		return helth;
	}
	char getlevel(){
		return level;
	}
	ok(){
	cout<<"default constructor called :";
	}
	~ok(){
	cout<<"destructor called :";
	}
	
};

int main(){
	//static memmory allocation
ok hero1,hero2,hero3;
// for dynamic memmory allocation we need to write (new) keyword
ok *a=new ok;
hero1.sethelth(7);
hero1.name="sagar";
hero1.setlevel('a');
hero2.name="singh";
hero2.sethelth(19);
hero2.setlevel('c');

hero1.print();
cout<<endl;
//cout<<"  helth  :"<<hero1.gethelth();
//cout<<"  level  :"<<hero1.getlevel();
cout<<endl;
hero2.print();
cout<<endl;
 hero3=hero1;
 hero3.print();
 cout<<endl;
 hero3=hero2;
 hero3.print();
 cout<<endl;
 
 a->name="bisht";
 a->sethelth(6);
 a->setlevel('z');
 cout<<" name :"<<(*a).name;
 cout<<"  helth  :"<<(*a).gethelth();
cout<<"  level  :"<<(*a).getlevel();
cout<<'\n';
  cout<<" name :"<<a->name;
 cout<<"  helth  :"<<a->gethelth();
cout<<"  level  :"<<a->getlevel();
cout<<'\n';
//cout<<" name :"<<ok.name1;
//we need to delete it dynamic memmory allocation manually
delete a;
	return 0;
}


