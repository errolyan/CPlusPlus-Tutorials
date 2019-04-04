#include<iostream>
using namespace std;

class People{
	private:
		string name;
		int age;
	public:
                void People1(string name1,int age1){
		name = name1;
		age = age1;
		}
		void speek(){
			cout<<"My name is "<<name<<" , My age is "<<age<<endl;
		}
};

class Stutent: public People{
	public:
		void learning(){
		cout<<"learing, and I have skills speek"<<endl;
		}
};

int main(){
	Stutent s1;
	s1.People1("zhangsan",20);
	s1.speek();
	s1.learning();
	return 0;
}
