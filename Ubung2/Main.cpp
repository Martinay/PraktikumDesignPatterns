#include <iostream>
#include "Header/Add.h"
#include "Header/Sub.h"
#include "Header/Mul.h"
#include "Header/Variable.h"
#include "Header/TermIterator.h"

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

    TermIterator iterator = TermIterator(term);

    iterator.First();
    while(!iterator.IsDone())
    {
        iterator.Next();
        Term* item = iterator.CurrentItem();
        
        cout << item->GetValue();
    }

    int ab;
    cin >> ab;
    return 0;
}