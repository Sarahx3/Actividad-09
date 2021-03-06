#include "laboratorio.h"

Laboratorio::Laboratorio(){
    cont=0;
}

void Laboratorio::agregar(const Computadora &c){
    if(cont<5){
        arreglo[cont]=c;
        cont++;
    }
    else{
        cout<<"arreglo lleno"<<endl;
    }
}

void Laboratorio::mostrar(){
    cout<< left;
    cout<< setw(10)<<"Nombre";
    cout<< setw(12)<<"OS";
    cout<< setw(12)<<"Fabricante";
    cout<< setw(5)<<"Ram";
    cout<<endl;
    for (size_t i=0;i<cont;i++){
        Computadora &c= arreglo[i];
        cout << c;
        // cout<<"Nombre del equipo: "<<c.getNombre()<<endl;
        // cout<<"Sistema Operativo: "<<c.getOs()<<endl;
        // cout<<"Fabricante: "<<c.getFabricante()<<endl;
        // cout<<"Ram: "<<c.getRam()<<endl;
    }
}