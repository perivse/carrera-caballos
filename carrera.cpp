#include <iostream>
#include <cstdlib> // Para usar system()
#include <limits> // Limpiar buffer de entrada

using namespace std;

void menu(){
    int caballos;
    int tiempo_segundos;
    cout<<"Bienvenido al menu"<<endl;
    cout<<"Ingresa cuantos caballos deseas:"<<endl;
    while(true){
        if(!(cin>>caballos)){ // Si el int caballos no es un entero es verdadero
            cout<<"Ingresa un numero correcto porfavor"<<endl;
            cin.clear(); // Limpia el estado de error del flujo
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta la entrada
        }else{
            system("cls"); // Comando para limpiar en Windows
            while(true){
                cout<<"Ingresa el tiempo que quieres que dure el juego en segundos"<<endl;
                if(!(cin>>tiempo_segundos)){ // Si el int caballos no es un entero es verdadero
                    cout<<"Ingresa un numero correcto porfavor"<<endl;
                    cin.clear(); // Limpia el estado de error del flujo
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta la entrada
                }else{
                    break;
                }
            }
            break;
        }
    }



}


int main(){
    menu(); // Te manda al menu
    return 0;
}

