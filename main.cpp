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

int main() {
    Component *toolBox1 = new ToolBox();
    Component *toolBox2 = new ToolBox();
    Component *tool1 = new Tool("screwdriver");
    Component *tool2 = new Tool("hammer");
    Component *tool3 = new Tool("pump");
    toolBox1->addObj(tool1);
    toolBox2->addObj(tool2);
    toolBox2->addObj(tool3);
    toolBox1->addObj(toolBox2);
    toolBox1->doAction();
}
