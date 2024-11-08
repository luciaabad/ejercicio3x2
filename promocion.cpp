//
// Created by Lucia Abad on 6/11/24.
//

#include "promocion.h"
#include <iostream>
using namespace std;


void promocion() {

    float precio[2];
    float total;

    for(int i  = 0; i <= 2; i++) {
        cout<<"Introduzca el precio del producto "<< i +1<< ":";
        cin>>precio[i];

        while (precio[i]< 0) {

            cout<<"El precio no puede ser negativo" <<endl;

            cout<< "Vuelve a introducir otro precio valido: ";
            cin>>precio[i];

        }
    }
    if(precio[0]>precio[1] && precio[1]>precio[2]) {
        total = precio[1] + precio[2];

    } else if (precio[1]<precio[2] && precio[0]>precio[1]) {
        total = precio[0] + precio[2];

    } else if (precio[1]>precio[0] && precio[2]>precio[1]) {
        total = precio[1] + precio[2];
    }

    cout<<"Total de precio del producto: "<<total<<endl;

    }


