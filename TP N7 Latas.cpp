#include<bits/stdc++.h>
using namespace std;

int TotalDeLatas(string cadena);
int MayorSecuencia(string cadena);
int SegundaSecuencia(string cadena);
int Distancia(string cadena);

int main(){
string cadena;

cout<<"ingrese secuencia:  "<<endl;
getline(cin, cadena);

cout<<"Catidad de latas: "<<TotalDeLatas(cadena)<<endl;
cout<<"Secuencia más grande: "<<MayorSecuencia(cadena)<<endl;
cout<<"Segunda secuencia más grande: "<<SegundaSecuencia(cadena)<<endl;
cout<<"Distancia: "<<Distancia(cadena)<<endl;

return 0;
}

int TotalDeLatas(string cadena){

return cadena.size();

}

int MayorSecuencia(string cadena) {
    int max = 0;  
    int contador = 0;  

    for (int i = 0; i < cadena.size(); i++) {
        if (cadena[i] == 'G') {
            contador++; 
        } else {
            if (contador > max) {
                max = contador;  
            }
            contador = 0;  
        }
    }


    if (contador > max) {
        max = contador;
    }

    return max;
}

int SegundaSecuencia(string cadena){
    int max = 0;  
    int max2 = 0;  
    int contador = 0;  

    for (int i = 0; i < cadena.size(); i++) {
        if (cadena[i] == 'G') {
             contador++;
            if (contador > max) {
                max2 = max;  
                max = contador; 
            } else{
			 if (contador < max) {
                max2 = contador;  
                
            }
        }
        } else {
            contador = 0;  
        }
    }

    return max2;
}
	int Distancia(string cadena){
    int distancia = 0;
    int max1; 
	int max2;
    int c = 0;
    

    for (int i = 0; i < cadena.size(); i++) {
        if (cadena[i] == 'G') {
            c++;
            if (c== max1 || c == max2) {
            
                distancia = c;
                
            }
        }
    }

    return distancia;
}