#include<iostream>
using namespace std;

struct Rectangle{
	int weight,height;
};

int main(){
	struct Rectangle rec;
	rec.weight = 8;
	rec.height = 5;
	cout<<"Area of Rectangle is:"<<(rec.weight * rec.height)<<endl;
	return 0;
}
