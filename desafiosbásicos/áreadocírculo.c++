// Área do círculo:

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float PI = 3.14159;
    float raio, area;

    cout << "Digite o raio do circulo: ";
    cin >> raio;

    area = PI * pow(raio, 2);

    cout << "A area do circulo e: " << area << endl;

    return 0;
}
