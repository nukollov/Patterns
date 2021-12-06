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

int main() {
    TrainingSystem* trSys = new TrainingSystem();
    trSys->start();
    trSys->start();
    trSys->start();
}
