#include <iostream>
#include "Header/Add.h"
#include "Header/Sub.h"
#include "Header/Mul.h"
#include "Header/Variable.h"

using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    Term *term = new Add(
        new Mul(
            new Add(
                new Variable("a",a),
                new Variable("b",b)),
            new Sub(
                new Variable("a",a),
                new Variable("c",c))),
        new Sub(
            new Mul(
                new Variable("b",b),
                new Variable("d",d)),
            new Variable("a",a)));


    term->Print();
    cout << endl << "Lösung: " << term->Calc();

    int ab;
    cin >> ab;
    return 0;
}