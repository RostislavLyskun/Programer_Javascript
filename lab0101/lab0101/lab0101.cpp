

#include <iostream>
using namespace std;

int main()
{
    double A, B;

    cin >> A;
    cin >> B;

    double S = A + B;
    double K = A - B;
    double C = A * B;
    double Z = A / B;

    cout << "A + B = " << S << endl;
    cout << "K - B = " << K << endl;
    cout << "A * B = " << C << endl;
    cout << "K / B = " << Z << endl;
}

