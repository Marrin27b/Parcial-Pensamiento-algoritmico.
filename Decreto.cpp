#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int ingreso;
    double tributo;
    cout << "Tienes que aportar al tesoro real, ¿cuanto ganas?" << endl;
    cin >> ingreso;
    
    if (ingreso < 0){
        cout << "¿Cómo vas a ganar monedas negativas?" << endl;
        tributo = 0;
    }else if (ingreso <= 10000){
        tributo = 0.0;
    }else if (ingreso <= 50000){
        tributo = (ingreso - 10000) * 0.1;
    }else{
        tributo = 4000 + ((ingreso - 50000) * 0.2);
    }
    cout << "Tienes que pagar " << fixed << setprecision(2) << tributo << " monedas al tesoro real.";
    
    return 0;
}