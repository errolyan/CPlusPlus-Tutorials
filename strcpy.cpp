#include<iostream>
#include<string>
using namespace std;
int main(){
	char key[25],buffer[25];
	cout<<"Enter the key string:";
	cin.getline(key,25);
	strcpy(buffer,key);
	cout << "key ="<<key<<endl;
	cout << "Buffer ="<<buffer<<endl;
	cout << "string length is " <<strlen(buffer)<<endl;
	return 0;
}
	
