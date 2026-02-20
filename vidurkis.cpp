#include <iostream>
using namespace std;

int main(){

int x, y, z; //pazymiai

cout<<"Įrašykite pirmajį pažimį"<<endl;
cin>> x; //pirmasis pazimys

cout<<"Įrašykite antrajį pažimį"<<endl;
cin>> y;//antrasis pazimys

cout<<"Įrašykite trečiajį pažimį"<<endl;
cin>> z; //trecias pazimys

double vidurkis =(x+y+z)/3;

if(vidurkis >=8 && vidurkis <=10){
    cout<<"Vidurkis geras "<< vidurkis<<endl;
}
else if(vidurkis >=5 && vidurkis <=7){
    cout<<"Vidurkis patenkimamas "<< vidurkis<<endl;
}
else {
    cout<<"Vidurkis neigiamas "<< vidurkis<<endl;
}

}






















