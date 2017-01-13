#include "Header/TermDirector.h"

TermDirector::TermDirector(TermBuilder* builder):
_builder(builder){     
}

void TermDirector::Create(){
    CreateTermArray();
    for (int i = 0; i < 6; i++)
    {
        _builder->AddLinkLeft(_term[i], _term[2 * i + 1]);
        _builder->AddLinkRight(_term[i], _term[2 * i + 2]);
    }
}

Term* TermDirector::GetTerm(){
    return _term[0];
}

void TermDirector::CreateTermArray(){
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    Term* terms[13];
    terms[0] = new Add(NULL, NULL);
    terms[1] = new Mul(NULL, NULL);
    terms[2] = new Sub(NULL, NULL);
    terms[3] = new Add(NULL, NULL);
    terms[4] = new Sub(NULL, NULL);
    terms[5] = new Mul(NULL, NULL);
    terms[6] = new Variable("a", a);
    terms[7] = new Variable("a", a);
    terms[8] = new Variable("b", b);
    terms[9] = new Variable("a", a);
    terms[10] = new Variable("c", c);
    terms[11] = new Variable("b", b);
    terms[12] = new Variable("d", d);
    _term = terms;
}