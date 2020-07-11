#include <iostream>
#include <climits>

using namespace std;

int greddyChange(int coinSet[], int totalMonedas, int cambio){
    if (cambio==0){
        return 0;
    }else if(cambio < 0){
        return INT_MAX;
    }

    int coins = INT_MAX;

    for(int i = 0; i < totalMonedas; i++){
        int res = greddyChange(coinSet,totalMonedas, cambio-coinSet[i]);
        if(res != INT_MAX){
            coins = min(coins,res+1);
        }
    }

    return coins;
}

int main(int argc, char const *argv[])
{
    int coinSet[] = {1,2,5,10,20};
    int n = sizeof(coinSet)/sizeof(coinSet[0]);
    int deuda = 27;

    cout << "el minimo de monedas para el cambio es: \n"
        << greddyChange(coinSet,n,deuda);
    return 0;
}
