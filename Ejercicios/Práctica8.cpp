#include <iostream>
using namespace std;

int Perimetro(int lado1 , int lado2){

    int perimetro = (lado1 * 2)+(lado2 *2);
    return perimetro;

}

int Area(int b, int h){
    int area = b*h;
    return area;

}


int main (){
    
    int base, altura;

    cout << "Introduzca la longitud de su base: ";
    cin >> base;

    cout << "Introduzca la longitud de su altura: ";
    cin >> altura;

    cout <<  "El perímetro de su rectángulo es " << Perimetro(base , altura) << endl;

    cout <<  "El área de su rectángulo es " << Area(base , altura) << endl;

    return 0;
}
