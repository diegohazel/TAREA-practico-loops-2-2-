#include <iostream>
#include <string>

using namespace std;

int main (){
   
string x ;
int contador = 0;
int cantidadLetras = 0;
int primeraPalabra = 0;

const int mayus1 = 65, mayus2 = 90, minus1 = 97, minus2 = 122, espacio = 32;

//ASCII Mayusculas: 65 - 90  
// Minusculas: 97 - 122
// Espacio: 32 



do{
    cout << "Ingrese 2 palabras: \n" << endl;
    getline (cin, x);  
    if (x[0] == espacio){
        cout << "No se puede ingresar un espacio al inicio, VOLVER A INTENTAR"<< endl;
    }
}while(x[0] == espacio);

   do
    {
        contador ++;

        int letra;
        letra = x[contador];

        if ((letra >= mayus1 &&  letra <= mayus2) || (letra >= minus1 && letra <= minus2 || (letra == espacio)) )
        {
            cantidadLetras ++;
        }else 
        {
            cantidadLetras ++;
            
            break;
        }

        if ((letra == espacio))
        {
                primeraPalabra = cantidadLetras;
        }

    }while (contador < 100);

    cout << primeraPalabra << endl;
    cout << cantidadLetras << endl;


return 0;
}