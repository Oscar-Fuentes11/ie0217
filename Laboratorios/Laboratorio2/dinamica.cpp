#include <iostream>
using namespace std;

/*data section*/
int variableGlobal = 10;

 /*text section*/
 void funcionGlobal(){

    /*data section*/
    static int variableLocalEstatica = 5;
    /*stack section*/
    int variableLocal = 20;

/*Mostrar el calor de las variables*/
    cout << "Variable global:" <<variableGlobal << endl;
    cout <<"Variable local estatica:" <<variableLocalEstatica <<endl;
    cout << "Variabnle Local:" << variableLocal << endl;

 }

 int main (){

/*stack section*/
    int variableLocalMain =15;
    funcionGlobal();
    cout <<"varianble local en main:" << variableLocalMain << endl;
 
 /*heap section*/
    int *variableDinamica = new int;
    *variableDinamica=25;

    cout << "Variable dinamica:" << *variableDinamica << endl;

    delete variableDinamica;


    return 0;
    
 }