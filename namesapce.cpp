#include<iostream>
using namespace std;

namespace American{
	void speak(){
	cout<<"English"<<"\n";
	}
}

namespace China{
	void speak(){
	cout<<"Chinese"<<"\n";
	}
}

int main(){
	American::speak();
	China::speak();
	return 0;
}
