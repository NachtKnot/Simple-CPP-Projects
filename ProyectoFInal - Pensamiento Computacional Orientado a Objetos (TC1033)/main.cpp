#include <iostream>
#include <fstream>

using namespace std;

#include "Empleado.h"
#include "Depto.h"

/* Proyecto Final

Pablo Agustín Ortega Kral A00344664
Ignacio Hernández de la Fuente A00829933

 */

bool searchID(int ID, Depto dep[], int numDep){
    for (int i = 0; i < numDep; i++){
        if (ID == dep[i].getIdDep()){
            return true;
        }
    }
    return false;
}

void readDepartamento(Depto dep[], int numDep){
    int idDep;
    string nombre;
    cout<<"----REGISTRO DEPARTAMENTOS----"<<endl;
    for (int i = 0; i < numDep; i++){
        cout<<"Ingresa nombre de departamento: ";
        cin>>nombre;
        cout<<"Ingresa ID del departamento: ";
        cin>>idDep;
        dep[i].setIdDep(idDep);
        dep[i].setNombre(nombre);

        cout<<endl;
    }
}

void printDepto(Depto dep[], int numDep){
    cout<<"----DEPARTAMENTOS----"<<endl;
    for (int i = 0; i < numDep; i++){
        cout<<dep[i].getIdDep()<<" ";
        cout<<dep[i].getNombre()<<endl;

    }
}

void readEmpleados(Empleado empleados[], int numEmp, Depto dep[], int numDep){
    int idEmp, idDep;
    string nombre;
    cout<<"----REGISTRO EMPLEADO----"<<endl;
    for (int i = 0; i < numEmp; i++){
        cout<<"Ingresa nombre del empleado: ";
        cin>>nombre;
        cout<<"Ingresa ID del empleado: ";
        cin>>idEmp;
        do{
            cout<<"Ingresa ID del departamento válido: ";
            cin>>idDep;
        } while (searchID(idDep,dep,numDep)==false);
        
        

        empleados[i].setIdEmp(idEmp);
        empleados[i].setNombre(nombre);
        empleados[i].setNumDepto(idDep);

        cout<<endl;
    }
    
}

void printEmpleados(Empleado empleados[], int numEmp){
    cout<<"----EMPLEADOS----"<<endl;
    for (int i = 0; i < numEmp; i++){
        cout<<empleados[i].getIdEmp()<<" ";
        cout<<empleados[i].getNombre()<<" ";
        cout<<empleados[i].getNumDepto()<<endl;
    }
    
}

void Emp_Dep(Empleado empleado[], int numEmp, int depVer){
    for (int i = 0; i < numEmp; i++){
        if (empleado[i].getNumDepto()==depVer){
        cout<<empleado[i].getIdEmp()<<" ";
        cout<<empleado[i].getNombre()<<" ";
        cout<<empleado[i].getNumDepto()<<endl;
        }   
    }
}

int main(){
    int numEmp;
    cout<<"Ingresa cantidad de empleados: ";
    cin>>numEmp;
    Empleado listaEmp[numEmp];

    int numDep;
    cout<<"Ingresa cantidad de departamentos: ";
    cin>>numDep;
    Depto listaDep[numDep];

    readDepartamento(listaDep,numDep);
    printDepto(listaDep,numDep);

    readEmpleados(listaEmp,numEmp,listaDep,numDep);
    printEmpleados(listaEmp,numEmp);

    int depVer;
    do
    {
        cout<<"Ingrese el ID del departamento que desea ver: ";
        cin>>depVer;
    } while (searchID(depVer,listaDep,numDep)==false);

    Emp_Dep(listaEmp, numEmp, depVer);
    
}