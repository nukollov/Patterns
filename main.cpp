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
    ShockproofFactory *f1 = new ShockproofFactory();
    StainlessFactory *f2 = new StainlessFactory();
    Screw* s1 = f1->createScrew();
    Hummer* h1 = f2->createHummer();
    s1->unscrew();
    h1->hit();
}
