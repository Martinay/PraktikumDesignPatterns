#include "Header/TermDirector.h"

TermDirector::TermDirector(TermBuilder* builder):
_builder(builder){     
}

void TermDirector::Create(){
    CreateTermArray();
    for (int i = 0; i < 6; i++)
    {
        int indexLeft = 2 * i + 1;
        _builder->AddLinkLeft(_term.at(i), _term.at(indexLeft));
        int indexRight = 2 * i + 2;
        _builder->AddLinkRight(_term.at(i), _term.at(indexRight));
    }
}

Term* TermDirector::GetTerm(){
    return _term.at(0);
}

void TermDirector::CreateTermArray(){
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    std::vector<Term*> terms;
    terms.push_back(new Add(NULL, NULL));
    terms.push_back(new Mul(NULL, NULL));
    terms.push_back(new Sub(NULL, NULL));
    terms.push_back(new Add(NULL, NULL));
    terms.push_back(new Sub(NULL, NULL));
    terms.push_back(new Mul(NULL, NULL));
    terms.push_back(new Variable("a", a));
    terms.push_back(new Variable("a", a));
    terms.push_back(new Variable("b", b));
    terms.push_back(new Variable("a", a));
    terms.push_back(new Variable("c", c));
    terms.push_back(new Variable("b", b));
    terms.push_back(new Variable("d", d));
    _term = terms;
}