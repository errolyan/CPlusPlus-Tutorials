#include <iostream>  
using namespace std;  
class Account {  
   public:  
       int accno; //data member (also instance variable)      
       string name; //data member(also instance variable)  
       static float rateOfInterest;   
       Account(int accno, string name)   
        {    
             this->accno = accno;    
            this->name = name;    
        }    
       void display()    
        {    
            cout<<accno<<"  "<<name<< " "<<rateOfInterest<<endl;   
        }    
};  
float Account::rateOfInterest=6.5;  
int main(void) {  
    Account a1 =Account(201, "Sanjay"); //creating an object of Employee   
    Account a2=Account(202, "Calf"); //creating an object of Employee  
    a1.display();    
    a2.display();    
    return 0; 
} 
