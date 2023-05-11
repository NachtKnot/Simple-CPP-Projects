#include <string>
#include <iostream>
using namespace std;

class Empleado{
    private:
        int idEmp;
        string nombre;
        int numDepto;
    public:
        Empleado();
        Empleado(int idE,string nom, int numD);
        int getIdEmp();
        void setIdEmp(int idE);
        string getNombre();
        void setNombre(string nom);
        int getNumDepto();
        void setNumDepto(int numD);
};

Empleado::Empleado(){
    idEmp = 0;
    nombre = '-';
    numDepto = 0;
}

Empleado::Empleado(int idE,string nom, int numD){
    idEmp = idE;
    nombre = nom;
    numDepto = numD;
}

int Empleado::getIdEmp(){
    return idEmp;
}

void Empleado::setIdEmp(int idE){
    idEmp = idE;
}

string Empleado::getNombre(){
    return nombre;
}

void Empleado::setNombre(string nom){
    nombre = nom;
}

int Empleado::getNumDepto(){
    return numDepto;
}

void Empleado::setNumDepto(int numD){
    numDepto = numD;
}