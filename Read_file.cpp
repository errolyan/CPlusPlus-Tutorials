#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string smg;
	ifstream filestream("timeout.txt");
	if (filestream.is_open())
	{
		while(getline(filestream,smg))
		{
		cout <<smg <<endl;
		}
		filestream.close();
	}
	else{
		cout<<"File opening is fail."<<endl;
	}
	return 0;
}
