#include <iostream>

using namespace std;

int main() {
    double pi = 0.0;
    int terminosCalculados = 0;
    double precisionDeseada = 0.0000001;
    double termino = 1.0;

    while (termino >= precisionDeseada) {
        if (terminosCalculados % 2 == 0) {
            pi += termino;
        } else {
            pi -= termino;
        }
        terminosCalculados++;
        termino = 1.0 / (2 * terminosCalculados + 1);
    }
     pi *= 4;

     cout.precision(7); 
     cout << "Aproximación de pi: " << pi << endl;

    return 0;
}
