#include <iostream>
#include "RealStand.h"
#include "ProxyStand.h"
#include "DiagnosticStand.h"
#include "OutsideStand.h"
#include "Adapter.h"
#include "Repairer.h"
#include "CanUse.h"
#include "Component.h"
#include "Tool.h"
#include "ToolBox.h"
#include "ClassificationSystem.h"
#include "Motocycle.h"
#include "ShockproofFactory.h"
#include "StainlessFactory.h"
#include "Automobile.h"
#include "TrainingSystem.h"
#include "State.h"
#include "InitState.h"
#include "ReadyState.h"
#include "RunState.h"
#include "Caretaker.h"
#include "Receiver.h"

int main() {
    ClassificationSystem* cS = new ClassificationSystem("test1");
    Subcriber* s1 = new Automobile();
    Subcriber* s2 = new Receiver();
    cS->subcribe(s1);
    cS->subcribe(s2);
    std::cout << "1 notify:" << std::endl;
    cS->notify();
    cS->unsubscribe(5);
    cS->unsubscribe(0);
    std::cout << "2 notify:" << std::endl;
    cS->notify();
}
