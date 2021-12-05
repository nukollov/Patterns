#include <iostream>
#include "RealStand.h"
#include "ProxyStand.h"
#include "DiagnosticStand.h"
#include "OutsideStand.h"
#include "Adapter.h"

int main() {
    DiagnosticStand *diaSt = new DiagnosticStand();
    OutsideStand *outSt = new OutsideStand();
    Adapter *adapter = new Adapter(outSt);
    diaSt->doAction();
    adapter->doAction();
}