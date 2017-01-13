#include "Header/NormalPrintVisitor.h"
#include "Header/InorderIterator.h"

Iterator * NormalPrintVisitor::CreateIterator() {
    return new InorderIterator(this);
}