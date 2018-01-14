#include <iostream>

using namespace std;

class Employee{
	
	public:
		string Name;
		string Position;
		unsigned int Age;
		Employee(){}
		Employee(string name,string position,int age):Name(name),Position(position),Age(age){};
		
		~Employee(){}

		friend ostream& operator<<(ostream& o,const Employee& A){
			return o<<A.Name<<"\t"<<A.Position<<"\t"<<A.Age<<endl;
		}

};
