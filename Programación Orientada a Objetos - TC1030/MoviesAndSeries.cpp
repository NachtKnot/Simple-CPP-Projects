// Ignacio Hernández de la Fuente
// A00829933

#include <iostream>
using namespace std;

class Video{
    protected:
        string tipoVideo;
        string genero;
        int duracion;
        int anioLanzamiento;
        virtual void muestraDatos();
        Video(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion);
        Video(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion);
    public:
        string nombreVideo;
        int calificacion = 0;
        void calificaVideo(int _calificacion);
};

class Pelicula: public Video{
    protected:
        int nominaciones;
    public:
        Pelicula(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion, int _nominaciones);
        Pelicula(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion, int _nominaciones);
        void muestraDatos();
};

class Seriee: public Video{
    protected:
        int numEpisodios;
    public:
        Seriee(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion, int _numEpisodios);
        Seriee(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion, int _numEpisodios);
        void muestraDatos();
};

void Video::muestraDatos(){
    cout << "Tipo de video: " << tipoVideo << endl;
    cout << "Nombre de video: " << nombreVideo << endl;
    cout << "Genero: " << genero << endl;
    if (calificacion==0){
        cout << "Calificacion: Sin calificar" << endl;
    }else{
        cout << "Calificacion: " << calificacion << endl;
    }
    cout << "Fecha de lanzamiento: " << anioLanzamiento << endl;
}

Video::Video(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion){
    tipoVideo = _tipoVideo;
    nombreVideo = _nombreVideo;
    genero = _genero;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
}

Video::Video(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion){
    tipoVideo = _tipoVideo;
    nombreVideo = _nombreVideo;
    genero = _genero;
    calificacion = _calificacion;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
}

void Video::calificaVideo(int _calificacion){
    calificacion = _calificacion;
}


// Clase Pelicula


void Pelicula::muestraDatos(){
    Video::muestraDatos();
    cout << "Duracion: " << duracion << " minutos" << endl;
    cout << "Nominaciones: " << nominaciones << endl;
}

Pelicula::Pelicula(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion, int _nominaciones):Video(_tipoVideo, _nombreVideo, _genero, _calificacion, _anioLanzamiento, _duracion){
    tipoVideo = "Pelicula";
    nombreVideo = _nombreVideo;
    genero = _genero;
    calificacion = _calificacion;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
    nominaciones = _nominaciones;
}

Pelicula::Pelicula(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion, int _nominaciones):Video(_tipoVideo, _nombreVideo, _genero, _anioLanzamiento, _duracion){
    tipoVideo = "Pelicula";
    nombreVideo = _nombreVideo;
    genero = _genero;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
    nominaciones = _nominaciones;
}


// Clase Serie


Seriee::Seriee(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion, int _numEpisodios):Video(_tipoVideo, _nombreVideo, _genero, _calificacion, _anioLanzamiento, _duracion){
    tipoVideo = "Serie";
    nombreVideo = _nombreVideo;
    genero = _genero;
    calificacion = _calificacion;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
    numEpisodios = _numEpisodios;
}

Seriee::Seriee(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion, int _numEpisodios):Video(_tipoVideo, _nombreVideo, _genero, _anioLanzamiento, _duracion){
    tipoVideo = "Serie";
    nombreVideo = _nombreVideo;
    genero = _genero;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
    numEpisodios = _numEpisodios;
}

void Seriee::muestraDatos(){
    Video::muestraDatos();
    cout << "Duracion: " << duracion << " minutos por episodio" << endl;
    cout << "Numero de episodios: " << numEpisodios << endl;
}

int main(){
    Pelicula peli1("Pelicula", "Requiem For A Dream", "Drama", 2002, 110, 3);
    Pelicula peli2("Pelicula", "Shrek", "Comedia", 2001, 95, 2);
    Pelicula peli3("Pelicula", "Black Widow", "Accion", 2021, 134, 0);
    
    Seriee serie1("Serie", "The Walking Dead", "Suspenso", 2010, 45, 147);
    Seriee serie2("Serie", "Lost", "Misterio", 2004, 43, 121);

    char op=0;
    char temp;
    char tempP;
    
    while (op==0){
        cout << endl;
        cout << "Eliga que desea hacer:" << endl;
        cout << "a) Consultar video" << endl;
        cout << "b) Calificar algun video" << endl;
        cout << "c) Mostrar series con determinada calificacion" << endl;
        cout << "d) Mostrar peliculas con determinada calificacion" << endl;
        cout << "e) Salir" << endl;
        cout << endl;
        cin >> op;
        if (op=='a'){
            cout << endl;
            cout << "1. " << peli1.nombreVideo << endl;
            cout << "2. " << peli2.nombreVideo << endl;
            cout << "3. " << peli3.nombreVideo << endl;
            cout << "4. " << serie1.nombreVideo << endl;
            cout << "5. " << serie2.nombreVideo << endl;
            cout << endl;
            int op2;
            cin >> op2;
            if (op2==1){
                cout << endl;
                peli1.muestraDatos();
                cout << endl;
                cout << "Ingrese 'b' para volver al menu principal" << endl;
                cin >> temp;
                if (temp=='b'){
                    op=0;
                }
            }
            if (op2==2){
                cout << endl;
                peli2.muestraDatos();
                cout << endl;
                cout << "Ingrese 'b' para volver al menu principal" << endl;
                cin >> temp;
                if (temp=='b'){
                    op=0;
                }
            }
            if (op2==3){
                cout << endl;
                peli3.muestraDatos();
                cout << endl;
                cout << "Ingrese 'b' para volver al menu principal" << endl;
                cin >> temp;
                if (temp=='b'){
                    op=0;
                }
            }
            if (op2==4){
                cout << endl;
                serie1.muestraDatos();
                cout << endl;
                cout << "Ingrese 'b' para volver al menu principal" << endl;
                cin >> temp;
                if (temp=='b'){
                    op=0;
                }
            }
            if (op2==5){
                cout << endl;
                serie2.muestraDatos();
                cout << endl;
                cout << "Ingrese 'b' para volver al menu principal" << endl;
                cin >> temp;
                if (temp=='b'){
                    op=0;
                }
            }
            if (op2=='b'){
                op == 0;
            }
        }else if(op=='b'){
            cout << endl;
            cout << "1. " << peli1.nombreVideo << endl;
            cout << "2. " << peli2.nombreVideo << endl;
            cout << "3. " << peli3.nombreVideo << endl;
            cout << "4. " << serie1.nombreVideo << endl;
            cout << "5. " << serie2.nombreVideo << endl;
            cout << endl;
            int op3;
            cin >> op3;
            if (op3==1){
                cout << endl;
                cout << "Ingrese la calificacion para " << peli1.nombreVideo << endl;
                cout << "La calificacion debe ser un numero entero entre 1 y 5" << endl;
                int calif;
                cin >> calif;
                while (calif<1 || calif>5){
                    cout << "El valor ingresado no es valido, intente nuevamente" << endl;
                    cin >> calif;
                }
                peli1.calificaVideo(calif);
                cout << endl;
                op=0;
            }
            if (op3==2){
                cout << endl;
                cout << "Ingrese la calificacion para " << peli2.nombreVideo << endl;
                cout << "La calificacion debe ser un numero entero entre 1 y 5" << endl;
                int calif;
                cin >> calif;
                while (calif<1 || calif>5){
                    cout << "El valor ingresado no es valido, intente nuevamente" << endl;
                    cin >> calif;
                }
                peli2.calificaVideo(calif);
                cout << endl;
                op=0;
            }
            if (op3==3){
                cout << endl;
                cout << "Ingrese la calificacion para " << peli3.nombreVideo << endl;
                cout << "La calificacion debe ser un numero entero entre 1 y 5" << endl;
                int calif;
                cin >> calif;
                while (calif<1 || calif>5){
                    cout << "El valor ingresado no es valido, intente nuevamente" << endl;
                    cin >> calif;
                }
                peli3.calificaVideo(calif);
                cout << endl;
                op=0;
            }
            if (op3==4){
                cout << endl;
                cout << "Ingrese la calificacion para " << serie1.nombreVideo << endl;
                cout << "La calificacion debe ser un numero entero entre 1 y 5" << endl;
                int calif;
                cin >> calif;
                while (calif<1 || calif>5){
                    cout << "El valor ingresado no es valido, intente nuevamente" << endl;
                    cin >> calif;
                }
                serie1.calificaVideo(calif);
                cout << endl;
                op=0;
            }
            if (op3==5){
                cout << endl;
                cout << "Ingrese la calificacion para " << serie2.nombreVideo << endl;
                cout << "La calificacion debe ser un numero entero entre 1 y 5" << endl;
                int calif;
                cin >> calif;
                while (calif<1 || calif>5){
                    cout << "El valor ingresado no es valido, intente nuevamente" << endl;
                    cin >> calif;
                }
                serie2.calificaVideo(calif);
                cout << endl;
                op=0;
            }
        }else if (op=='c'){
            cout << endl;
            cout << "Ingrese la calificacion deseada para realizar la busqueda" << endl;
            int tempCalif;
            cin >> tempCalif;
            while (tempCalif<1 || tempCalif>5){
                    cout << "El valor ingresado no es valido, intente nuevamente" << endl;
                    cin >> tempCalif;
                }
            if (tempCalif==serie1.calificacion || tempCalif==serie2.calificacion){
                cout << endl;
                cout << "Series con una calificacion de " << tempCalif << ":" << endl;
                if (tempCalif == serie1.calificacion && tempCalif == serie2.calificacion){
                    cout << serie1.nombreVideo << endl;
                    cout << serie2.nombreVideo << endl;
                    cout << endl;
                    cout << "Ingrese 'b' para regresar al menu principal" << endl;
                    cin >> temp;
                    if (temp=='b'){
                        op=0;
                    }
                }else if (tempCalif==serie1.calificacion){
                    cout << serie1.nombreVideo << endl;
                    cout << endl;
                    cout << "Ingrese 'b' para regresar al menu principal" << endl;
                    cin >> temp;
                    if (temp=='b'){
                        op=0;
                    }
                }else if (tempCalif==serie2.calificacion){
                    cout << serie2.nombreVideo << endl;
                    cout << endl;
                    cout << "Ingrese 'b' para regresar al menu principal" << endl;
                    cin >> temp;
                    if (temp=='b'){
                        op=0;
                    }
                }
            }else{
                cout << endl;
                cout << "Ningun resultado concide con la busqueda" << endl;
                cout << "Ingrese 'b' para regresar al menu principal" << endl;
                cin >> temp;
                if (temp=='b'){
                    op=0;
                }
            }
        }else if(op=='d'){
            cout << endl;
            cout << "Ingrese la calificacion deseada para realizar la busqueda" << endl;
            int tempCalif2;
            cin >> tempCalif2;
            while (tempCalif2<1 || tempCalif2>5){
                cout << "El valor ingresado no es valido, intente nuevamente" << endl;
                cin >> tempCalif2;
            }
            if (tempCalif2 == peli1.calificacion || tempCalif2 == peli2.calificacion || tempCalif2 == peli3.calificacion){
                cout << endl;
                cout << "Series con una calificacion de " << tempCalif2 << ":" << endl;
                if (tempCalif2 == peli1.calificacion){
                    cout << peli1.nombreVideo << endl;
                }
                if (tempCalif2 == peli2.calificacion){
                    cout << peli2.nombreVideo << endl;
                }
                if (tempCalif2 == peli3.calificacion){
                    cout << peli3.nombreVideo << endl;
                }
                cout << endl;
                cout << "Ingrese 'b' para regresar al menu principal" << endl;
                cin >> tempP;
                if (tempP=='b'){
                    op=0;
                }
            }else{
                cout << endl;
                cout << "Ningun resultado coincide con la busqueda" << endl;
                cout << "Ingrese 'b' para regresar al menu principal" << endl;
                cin >> tempP;
                if (tempP=='b'){
                    op=0;
                }
            }
        }else if(op=='e'){
            cout << "Saliendo del programa..." << endl;
            exit;
        }
    }
}