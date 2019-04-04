#include <iostream>  
using namespace std;  
class Animal {  
    public:  
    string color = "Black";    
};   
class Dog: public Animal   
{    
 public:  
    string color = "Grey";    
};  
int main(void) {  
     Animal d= Dog();    
    cout<<d.color;  
} 
