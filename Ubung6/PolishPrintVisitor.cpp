#include "Header/PolishPrintVisitor.h"
#include "Header/PreorderIterator.h"

Iterator * PolishPrintVisitor::CreateIterator() {
    return new PreorderIterator(this);
}