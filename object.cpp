#include<iostream>
using namespace std;

class Student {
    public:
        int id;
        string name;

        void insert(int i,string str){
            id = i;
            name = str;
        }
	void showMsg(){
	    cout<<id<<" "<<name<<endl;
	}
        void readbook(){
	cout<<name<<" is reading books"<<endl;
	}
	void sport(){
	cout<<name<<" is playing pingbang"<<endl;
	}
};

int main(){
    Student s1;
    Student s2;
    s1.insert(100,"zhangsan");
    s2.insert(101,"lisi");
    s1.showMsg();
    s2.showMsg();
    s1.readbook();
    s2.sport();
    return 0;
}
