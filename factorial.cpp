#include <iostream>  
using namespace std;  
int main()  
{  
   int i,fact=1,number;    
  cout<<"Enter any Number: ";    
 cin>>number;    
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
  int factorial(int);
// second solution
  fact=factorial(number);
  cout<<"Factorial of a number is: "<<fact<<endl;
  return 0;  
}

int factorial(int n)    
{    
    if(n<0)    
        return(-1); /*Wrong value*/      
    if(n==0)    
        return(1);  /*Terminating condition*/    
    else    
    {    
        return(n*factorial(n-1));        
    }
}    
