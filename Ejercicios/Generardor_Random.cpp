#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main(){

    int i , j;

    //ponermos la semilla
    srand ( (unsigned)time( NULL));

    /* gerara 10 números random. */
    for ( i=0 ; i < 10 ; i++){

        //generar actual números random
        j = rand();

        cout << "Números Random: " << j << endl;
    }

    return 0;
}