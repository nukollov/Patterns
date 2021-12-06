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

int main() {
    ClassificationSystem *cS = ClassificationSystem ::getInstance("hello");
    cS->showContent();
    cS = ClassificationSystem ::getInstance("hi");
    cS->showContent();
    ClassificationSystem *cS1 = ClassificationSystem ::getInstance("holla");
    cS1->showContent();
}
