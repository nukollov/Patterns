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

int main() {
    ClassificationSystem* cS = new ClassificationSystem("test1");
    Caretaker* caretaker = new Caretaker(cS);
    caretaker->pushMemento();
    std::cout << "1 call: " << cS->getContent() << std::endl;
    cS->setContent("test2");
    std::cout << "2 call: " << cS->getContent() << std::endl;
    caretaker->popMemento();
    std::cout << "3 call: " << cS->getContent() << std::endl;
}
