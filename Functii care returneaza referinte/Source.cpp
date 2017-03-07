#include <iostream>
using namespace std;

struct carte{
	char autor[64];
	char titul[64];
	double pret;
};

carte bilbioteca[3]={
	{"Jamsa" , "Totul despre C++", 49.95},
	{"Klander", "Hacker proff", 54.95},
	{"Jamsa" , "Visual basic" , 54.95}};

carte& da_carte(int i){
	if( (i>=0) && (i<3))
		return (bilbioteca[i]);
	else
		return (bilbioteca[0]);
}

void main(void){
	cout << "Pe punctul de a obtine cartea 0\n";
	carte& o_carte = da_carte(0);
	cout << o_carte.autor << ' ' <<o_carte.titul;
	cout << ' '<< o_carte.pret;

	system("pause");
}