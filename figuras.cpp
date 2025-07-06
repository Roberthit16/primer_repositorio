#include <iostream>
using namespace std;
int main(){
    float base,altura,resultado;
    int opcion;

    cout<<"/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/"<<endl;
    cout<<"/-CALCULADORA PARA EL AREA DE LAS FIGURAS-/"<<endl;
    cout<<"                 1.triangulo               "<<endl;
    cout<<"                 2.cuadrado                "<<endl;
    cout<<"                 3.rectangulo              "<<endl;
    cout<<"/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/"<<endl;
    cin>>opcion;

    switch(opcion){
        case 1:
        cout<<"ingrese la altura"<<endl;
        cin>>altura;

        cout<<"ingrese la base"<<endl;
        cin>>base;

        resultado= altura * base /2;
        cout<<"el area es: "<< resultado <<endl;
        break;

        case 2:
        cout<<"ingrese la altura"<<endl;
        cin>>altura;
        cout<<"ingrese la altura"<<endl;
        cin>>altura;
        resultado= altura * altura;
        cout<<"el area es: "<<resultado<<endl;
        break;
    }
}
