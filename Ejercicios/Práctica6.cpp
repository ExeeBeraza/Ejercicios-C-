#include <iostream>
using namespace std;



int main()
{

    cout << "descomente el codigo";

    int notas, i = 0 , vector[4];

    while (i < 4 && notas <= 10){

        cout << "hola";
        cout << "heui";
        cout << "Ingrese su nota N°" << i << ": ";

        cin >> notas;
        vector[i]+= notas;
        i++;
    }



    return 0;

}