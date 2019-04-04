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
using namespace China;
int main(){
	speak();
	return 0;
}
