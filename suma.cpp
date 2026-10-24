#include <iostream>
using namespace std;
int main() {
int n, i=1,  suma=0;
cout << "Ingrese un numero N : ";
cin >> n;
do {
    suma += i;
    i++;
}while(i<=n);
cout << "La suma de los numeros de 1 hasta   " << n << " es: " << suma << endl;
return 0;
}
