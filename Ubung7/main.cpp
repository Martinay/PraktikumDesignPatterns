#include <iostream>
#include <cstdio>
#include "Header/Facade.h"

using namespace std;

int main()
{
    Facade* facade = new Facade(); 
    facade->New();
    facade->Interpret();
    facade->Print();

    

    

    getchar();
}