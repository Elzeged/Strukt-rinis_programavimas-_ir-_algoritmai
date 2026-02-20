#include <iostream>
using namespace std;
int main(){

//suskaiciuoti vidurki, surasti didziausia skaiciu ir maziausia.

int skaicius [7]; //cia galima irasyti 7 skaicius [sitie skliaustai yra skirti masyvo indeksui]
int suma = 0; // cia bus kintamasis kuriame bus sk. suma
int maziausias; // maziausia reiksme
int didziausias; // didziausia reiksme
int neigiami = 0;// kiek neigiamu reiksmiu

cout<< "Įveskite 7 betkokius skaičius"<<endl;
 for(int x=0;  x <7; x++) {

    cin>> skaicius [x]; //cia bus ivedamas skaicius
    suma+= skaicius [x]; //skaiciuos sk. suma
    
    if(x==0){
        didziausias = skaicius[x]; 
        maziausias = skaicius [x];  
    }
    else{
        if(skaicius[x]> didziausias) didziausias = skaicius[x]; 
        if(skaicius[x]< maziausias) maziausias = skaicius [x]; 
    }
    if(skaicius[x]<0) neigiami++;

}
double vidurkis = suma /7; //cia bus apskaiciuojamas vidurkis
cout<< "Vidurkis"<<vidurkis<<endl;
cout<< "Didziausia reiksme"<<didziausias<<endl;
cout<< "Maziausia reiksme"<<maziausias<<endl;
cout<< "Neigiamu skaiciu"<<neigiami<<endl;

return 0;




}




