#include <string>
#include <iostream>
using namespace std;

class Depto{
private:
    int idDep;
    string nombre;
public:
    Depto();
    Depto(int idD, string nom);
    int getIdDep();
    void setIdDep(int idD);
    string getNombre();
    void setNombre(string nom);
};

Depto::Depto(){
    idDep = 0;
    nombre = "-";
}

Depto::Depto(int idD, string nom){
    idDep = idD;
    nombre = nom;
}

int Depto::getIdDep(){
    return idDep;
}

void Depto::setIdDep(int idD){
    idDep = idD;
}

string Depto::getNombre(){
    return nombre;
}

void Depto::setNombre(string nom){
    nombre = nom;
}