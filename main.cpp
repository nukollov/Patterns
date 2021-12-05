#include <iostream>
#include "RealStand.h"
#include "ProxyStand.h"

int main() {
    Algorithm *a1 = new Cause();
    Algorithm *a2 = new Unit();
    RealStand *rs1 = new RealStand(a1);
    RealStand *rs2 = new RealStand(a2);
    rs1->doAction();
    rs2->doAction();

    ProxyStand *ps = new ProxyStand();
    RealStand *rs3 = new RealStand(a2);
    std::cout << "before initialization ProxyFilter:" << std::endl;
    ps->doAction();
    rs3->doAction();
    std::cout << "after initialization ProxyFilter:" << std::endl;
    ps->initStand(rs3);
    ps->doAction();
    rs3->doAction();
}