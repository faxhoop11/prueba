#include "iostream"
using namespace std;

int main(){

   int num;
    cout << "Introduce un numero entero: ";
    cin >> num;

    if (num > 0) {
        cout << "El numero es positivo." << endl;
    } else if (num < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es cero." << endl;
    }



    return 0;

}