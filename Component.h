//
// Created by nikit on 05.12.2021.
//

#ifndef LR3_COMPONENT_H
#define LR3_COMPONENT_H


class Component {
public:
    virtual void doAction() = 0;
    virtual void addObj(Component *pComponent){};
    virtual void removeObj() {}
};


#endif //LR3_COMPONENT_H
