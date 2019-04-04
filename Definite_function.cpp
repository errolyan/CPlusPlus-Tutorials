//=================================
// 定义函数
//================================
#include<iostream>
using namespace std;
int ears( double radius){
double s = radius*radius*3.14;
return s;
}
int main(){
cout<<"input R"<<endl;
double R;
cin>>R;
double mianji =ears(R);
cout<< mianji<<endl;
return 0;
}
