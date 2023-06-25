#include <iostream>
#include <cmath>
using namespace std;

class Trojkat{
    private:

float bok1;
float bok2;
float bok3;   

public:

Trojkat(){
		cout<<"Podaj bok 1,2,3 : ";	
		cin >> bok1 >> bok2 >> bok3;
    }

void wypisz(){
	
	cout<<"\n";

cout << " Trojkat posiada boki o wymiarach :  " << bok1 <<" "<<bok2<<" "<<bok3<<endl;
cout << " Obwod wynosi : "<<obwod(bok1,bok2,bok3)<<endl;
cout << " Pole wynosi : "<< pole(bok1,bok2,bok3)<<endl;
cout << " Z tego trojkata (1 - mozna zbudowac trojkat , 0 - nie mozna) : "<<czy_trojkat(bok1,bok2,bok3)<<endl;
cout << " Ten trojkat (1 - jest rownoramienny , 0 - nie jest) : "<< czy_trojkat(bok1, bok2, bok3)<<endl;
cout << " Ten trojkat (1 - jest prostokatny , 0 - nie jest) : "<< czy_prostokatny(bok1,bok2,bok3);

}

int obwod(float bok1, float bok2, float bok3){
	float obwod; 
	obwod= bok1 + bok2 + bok3;
	
	return obwod;
}

int pole(float bok1, float bok2, float bok3){
	float pole;
	float polowa_obwodu = (bok1+bok2+bok3)/2;
	pole= sqrt(polowa_obwodu*(polowa_obwodu-bok1)*(polowa_obwodu-bok2)*(polowa_obwodu-bok3));
	
	return pole;
}
bool czy_trojkat(float bok1, float bok2, float bok3){

	if(bok1+bok2>bok3 && bok1+bok3>bok2 && bok2+bok3>bok1)
	return true;
	else 
	return false;
}

bool czy_rownoramienny(float bok1, float bok2, float bok3){
	
	if(bok1==bok2 || bok1==bok3 || bok2==bok3)
	return true;
	else
	return false;
}

bool czy_prostokatny(float bok1, float bok2, float bok3){
	
	float ap=pow(bok1,2);
	float bp=pow(bok2,2);
	float cp=pow(bok3,2);
	
	if(ap+bp==cp)
	return true;
	else
	return false;
}
};

int main()

{

Trojkat t1;
t1.wypisz();

}
