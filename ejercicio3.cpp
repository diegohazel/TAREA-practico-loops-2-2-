#include <iostream>
#include <string>
using namespace std;

//igresar 1, cuando sea 0 detener programa
//imprimir      Om-nom-nom :P    
//imprimir      Sin pastel :(

//48 == 0
//49 == 1

int main(){

string numbers ;    
bool x;
int letras;
const int espacio = 32;

getline(cin, numbers);


for(int contador = 0; contador <=20; contador++)
{
    letras = numbers[contador];

if(letras == 48)
{
    cout << "Sin pastel :(" << endl;
    break;
}else if (letras == espacio)
{continue;
}else if (letras == 49)
{
    cout << " Om-nom-nom :P" << endl;
}

}



    return 0;
}