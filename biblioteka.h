#include <iostream>

using namespace std;

class biblioteka{
	
	public:
		string autor;
		string kategoria;
		unsigned int strony;
		string status;
		biblioteka(){}
		biblioteka(string autor,string kategoria,int strony,string status):autor(autor),kategoria(kategoria),strony(strony),status(status){};
		
		~Employee(){}

		friend ostream& operator<<(ostream& o,const biblioteka& A){
			return o<<A.autor<<"\t"<<A.kategoria<<"\t"<<A.strony<<"\t"<<A.status<<endl;
		}

};
