#include <iostream>
#include <fstream>
#include <new>
#include <string.h>
#include <math.h>


using namespace std;

template<class key, class data>class map_template {
	key* id;
	data* dane;
	unsigned int rozmiar;	
public:
	class brak_rekordu {};
	map_template(){}
	map_template(const map_template<key, data>& a) {
		this->rozmiar=a.rozmiar;
		this->id=new key[rozmiar];
		
		try {
			this->dane=new data[rozmiar];
		}
		catch(...) {
			delete [] this->id;	
		}
		this->id=a.id;
		this->dane=a.dane;	
	};
	~map_template() {
		delete [] this->id;
		delete [] this->dane;
	};
	void Add(key a,data b) {
		if(this->rozmiar==0){
				rozmiar++;
				id=new key[1];
				try{
					dane=new data[1];
				}catch(...){
					delete[] id;
					//throw error();
				}
				id[0]=a;
				dane[0]=b;
		}
		else {
		key* newid=new key[rozmiar+1];
		//try {
			data* newdata=new data[rozmiar+1];
		//}
		//catch(...) {
			//delete [] newid;
		//}
		for(unsigned int i=0;i<rozmiar;i++) {
			newid[i]=this->id[i];
			newdata[i]=this->dane[i];	
		}
		newid[rozmiar]=a;
		newdata[rozmiar]=b;
		delete [] this->id;
		delete [] this->dane;
		this->id=newid;
		this->dane=newdata;
		this->rozmiar++;
		}
	}
	data* Find(key a) const {
		for(unsigned int i=0;i<this->rozmiar; i++) 
			if(a==this->id[i])
				return &dane[i];
		cout<<"brak takiego rekordu w bazie"<<endl;
		throw brak_rekordu();
	}
	void operator=(const map_template<key,data>& a) {
		key* newid=new key[a.rozmiar];
		//try {
			data* newdata=new data[a.rozmiar];
		//}
		//catch(...) {
			//delete [] newid;
		//}
		for(unsigned int i=0;i<a.rozmiar;i++) {
			newid[i]=a.id[i];
			newdata[i]=a.dane[i];
		}

		delete [] this->id;
		delete [] this->dane;
		this->id=newid;
		this->dane=newdata;
		this->rozmiar=a.rozmiar;
	}

	friend ostream& operator<<(ostream& o,const map_template<key,data>& a) {
		
		for(unsigned int i=0;i<a.rozmiar;i++)
			o<<a.id[i]<<"/t/t"<<a.dane[i]<<endl;
		return o;			
	}	
	
	
};
