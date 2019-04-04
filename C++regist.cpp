#include<iostream>
using namespace std;
void func(){
	static int i=0;
	int j=0;
	i++;
	j++;
	cout<<"i="<<i<<" ;j="<<j<<endl;
}

int main(){
	func();
	func();
	func();
}
