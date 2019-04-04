#include<iostream>
using namespace std;

class people{
	public:
	virtual void skills()=0;
};

class Student : public people{
	public:
	void skills(){
	cout<<"learning"<<endl;
	}
};

class MinStudent : public Student{
	public:
	void skills(){
	cout<<"Reading"<<endl;
	}
};

class Teachers : public people{
	public:
	void skills(){
	cout<<"Teaching"<<endl;
	}
};

int main(){
	Student s1;
	s1.skills();
	MinStudent s2;
	s2.skills();
	Teachers t1;
	t1.skills();
	return 0;
}

