#include <iostream>

using namespace std;

class biblioteka{
	
	public:
		string kategoria;
		unsigned int strony;
		string status;
		biblioteka(){}
		biblioteka(string kategoria,int strony,string status):kategoria(kategoria),strony(strony),status(status){};
		
		~biblioteka(){}

		friend ostream& operator<<(ostream& o,const biblioteka& A){
			return o<<A.kategoria<<"\t"<<A.strony<<"\t"<<A.status<<endl;
		}

};
