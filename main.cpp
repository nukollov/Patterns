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

int main() {
    Automobile *a = new Automobile("mazda");
    Automobile *a2 = a->clone();
    std::cout << "mark of automobile is - " << a2->getMark() << std::endl;
}
