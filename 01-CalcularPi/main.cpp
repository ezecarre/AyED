#include <iostream>

using namespace std;

int main() {
    int n;
    double pi = 0.0;

    cout << "Ingrese el número de términos para la aproximación de pi: ";
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        double termino = 1.0 / (2 * i + 1);
        if (i % 2 == 0) 
        {
            pi += termino;
        } else 
        {
            pi -= termino;
        }
    }
     pi *= 4;

     cout.precision(7); 
     cout << "Aproximación de pi: " << pi << endl;

    return 0;
}
