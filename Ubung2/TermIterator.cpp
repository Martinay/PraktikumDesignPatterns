#include "Header/TermIterator.h"

TermIterator::TermIterator(Term* term)
:_first(term),_current(term)
{
    _stack = new stack<Term *>();
}

void TermIterator::Next(){
    Operation *tmp;
    while (_current != NULL)
    {
        _stack->push(_current);
        if (tmp = (Operation*)_current->GetTerm())
        {
            _current = tmp->GetLinks();
        } else 
        {
            _current = NULL;
        }
    }
    _current = _stack->top();    
    _stack->pop();
    _currentReturnValue = _current;

    Term *term = _current;
    if(tmp = (Operation*)_current->GetTerm())
    {
        _current = tmp->GetRechts();
    }else
    {
        _current = NULL;
    }
}

void TermIterator::First(){
    delete _stack;
    _stack = new stack<Term *>();
    _current = _first;
}

bool TermIterator::IsDone(){
    return _stack->empty() && _current == NULL;
}

Term* TermIterator::CurrentItem(){
    return _currentReturnValue;
}