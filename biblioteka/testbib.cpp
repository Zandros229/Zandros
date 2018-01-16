#include <iostream>
using namespace std;

#include "biblioteka.h"			//defines class Employee
#include "map_template.h"		//defines template map_template<Key,Value>

int main(void)
{
	typedef string autor; 							//Identification number of Employee
	map_template<autor,biblioteka> Database;					//Database of employees

	Database.Add("Kowalski",biblioteka("fantasy",195,"wypozyczona")); 	//Add first employee: name: Jan Kowalski, position: salseman, age: 28,
	Database.Add("Nowak",biblioteka("historyczne",289,"dostepna")); 	//Add second employee: name: Adam Nowak, position: storekeeper, age: 54
	Database.Add("Wozniak",biblioteka("sci-fi",430,"wypozyczona")); 	//Add third employee: name: Anna Zaradna, position: secretary, age: 32

	cout << Database << endl;							//Print databese

	map_template<autor,biblioteka> NewDatabase = Database;	//Make a copy of database
	
	biblioteka* pE;
	pE = NewDatabase.Find("Kowalski");					//Find employee using its ID
	pE->status = "dostepna";							//Modify the position of employee
	pE = NewDatabase.Find("Nowak");					//Find employee using its ID
	pE->kategoria = "historyczne-fantasy";										//Modify the age of employee

	Database = NewDatabase;								//Update original database
	
	cout << Database << endl;							//Print original databese
}
