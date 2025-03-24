#include <iostream>
#include <string>

using namespace std;

int main (){
   
string x = "pruebaloco";
int contador = 0;
int cantidadLetras = 0;

const int mayus1 = 65, mayus2 = 90, minus1 = 97, minus2 = 122, espacio = 32;

//ASCII Mayusculas: 65 - 90  
// Minusculas: 97 - 122
// Espacio: 32  

   do
    {
        //cout << x[contador] << endl;
        contador ++;

        int letra;
        letra = x[contador];
       // cout << letra << endl;

        if ((letra >= mayus1 &&  letra <= mayus2) || (letra >= minus1 && letra <= minus2 ) || (letra == espacio) )
        {
            cantidadLetras ++;
        } else 
        {
            break;
        }



    }while (contador < 100);

cout << "cantidad de letras es : " << cantidadLetras << endl;


return 0;
}