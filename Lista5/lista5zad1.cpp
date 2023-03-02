#include <iostream>

using namespace std;

int readMass () {
    int mass;
    cout << "Wprowadz wage: ";
    cin >> mass;
    return mass;
}

float readHeight () {
    float height;
    cout << "Wprowadz wzrost: ";
    cin >> height;
    return height;
}

float BMI ( float height,  int mass ) {
    float BMI_Value = mass / ( height * height );
    return BMI_Value;
}

void BMIprint (float BMI_Value) {
    cout << endl << BMI_Value << endl;
}

int main()
{   
    BMIprint( BMI ( readHeight(), readMass() ) );
    return 0;
}
