#include<iostream>
using namespace std;

class Employee {
	public:
		int id;
		string name;
		float salary;
		Employee(int id,string name, float salary)
		{
			this->id=id;
			this->name = name;
			this->salary = salary;
		}

		void display(){
			cout<<id<<" "<<name<< " "<<salary<<endl;
		}
};


class Stutent {
        public:
                int id;
                string name;
                float salary;
		static float rateOfInterest;
                Stutent(int id,string name, float salary)
                {
                        this->id=id;
                        this->name = name;
                        this->salary = salary;
                }

                void display1(){
                        cout<<id<<" "<<name<< " "<<rateOfInterest<endl;
                }
};

float Stutent::rateOfInterest=6.5;

int main(void){
	Employee e1 = Employee(101, "haha",89000);
	Employee e2 = Employee(102, "lili",59000);
	e1.display();
	e2.display();
	Stutent s1 = Stutent(130,"xixi",62000);
	Stutent s2 = Stutent(131,"oo",89000);
	s1.display1();
	s2.display1();
	return 0;
}

