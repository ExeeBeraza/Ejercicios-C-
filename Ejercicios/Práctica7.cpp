#include <iostream>
using namespace std;

int DiametroCircular(int lado){
    int diametro = lado * 2;
    return diametro;
}

int PerimetroCircular(int lado){
    float pi = 3.141592653589;
    int perimetro = 2 * pi * lado;
    return perimetro;
}

int SuperficieCircular(int lado){
    float pi = 3.141592653589;
    int area = pi * (lado * lado );
    return area;
}


int main(){

    int radio_circulo;

    cout << "Ingrese el radio del círculo: ";
    cin >> radio_circulo;

    cout <<"El diametro del cículo es " << DiametroCircular(radio_circulo) << endl;

    cout <<"El perímetro del cículo es " << PerimetroCircular(radio_circulo) << endl;

    cout <<"La superficie del cículo es " << SuperficieCircular(radio_circulo) << endl;
    
    return 0;

}