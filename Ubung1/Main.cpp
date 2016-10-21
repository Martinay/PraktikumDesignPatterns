#include <iostream>
#include "Header/Add.h"
#include "Header/Sub.h"
#include "Header/Mul.h"
#include "Header/Variable.h"

using namespace std;

int main()
{
    Term *term = new Add(
        new Mul(
            new Add(
                new Variable("a"),
                new Variable("b")),
            new Sub(
                new Variable("a"),
                new Variable("c"))),
        new Sub(
            new Mul(
                new Variable("b"),
                new Variable("d")),
            new Variable("a")));

    // Term *term = new Variable("abc");
    // Term *term1 = new Variable("abc");
    // Term *term2 = new Add(term, term1);


    term->Print();

    int a;
    cin >> a;
    return 0;
}