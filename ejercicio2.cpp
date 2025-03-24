#include <iostream>
#include <string>

using namespace std;

int main(){

string x;
string word;
string wordprint = "[";
char temp = 0;

int contador = 0;

const int mayus1 = 65, mayus2 = 90, minus1 = 97, minus2 = 122, espacio = 32;

do{
cout << "Ingrese sus dos palabras: "<< endl;
getline(cin, x);

if(x[0] == espacio)
{
   cout<< "No puedes iniciar tu palara con un espacio, volver a intentar" << endl; 
}
}while(x[0] == espacio);


do
{
temp = x[contador];
contador++;
word += temp;
wordprint += word;
word = "";  //el bug era que se olvidaba borrar el word xdddd
if (x[contador] == espacio)
{
    word += "]";
   wordprint += word;
    wordprint += "\n";
    word = "";
    wordprint += "[";
    contador ++;
}else if(temp == 0){wordprint += "]";}
}while(temp != 0);

cout << wordprint << endl;



    return 0;
}