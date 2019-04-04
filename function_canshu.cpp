#include<iostream>
using namespace std;
int hanshu(int data){
	data = data+5;
	return data;
}

int main(){
	int data=3;
	int newdata = hanshu(data);
	cout << "value of the data is :"<< newdata << endl;
	return 0;
}
