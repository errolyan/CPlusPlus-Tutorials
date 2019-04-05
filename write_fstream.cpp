#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream filestream("testout.txt");
	if (filestream.is_open())
	{
	filestream << "Welcome to javatpoint."<<endl;
	filestream << "C++ Tutorial.\n"<<endl;
	filestream.close();
	}
	else cout<<"File opening is fail"<<endl;
	return 0;
}
