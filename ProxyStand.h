//
// Created by nikit on 28.10.2021.
//

#ifndef LR3_PROXYSTAND_H
#define LR3_PROXYSTAND_H
#include "RealStand.h"

class ProxyStand {
private:
    RealStand *rs;
public:

    void doAction(){
        rs->doAction();
    }
    void initStand(RealStand *stand){
        this->rs = stand;
    }

    ProxyStand(){
        rs = new RealStand();
    }
};


#endif //LR3_PROXYSTAND_H
