//
// Created by nikit on 06.12.2021.
//

#include "ClassificationSystem.h"
#include "Automobile.h"

ClassificationSystem* ClassificationSystem :: clSys = nullptr;

void ClassificationSystem ::setDiagnosticStand(DiagnosticStand *dS) {this->diaSt = dS;}

void ClassificationSystem ::createTransport() {this->transport = new Automobile();}

void ClassificationSystem ::setTransport(TransportCreator *tC) {this->transport = tC;}

void ClassificationSystem ::transportDoAction() {this->transport->doAction();}

ClassificationSystem ::ClassificationSystem(std::string c) {this->content = c;}

ClassificationSystem* ClassificationSystem ::getInstance(std::string c)
{
    if(clSys == nullptr)
        clSys = new ClassificationSystem(c);
    return clSys;
}

void ClassificationSystem ::setContent(std::string c) { this->content = c;}

std::string ClassificationSystem ::getContent() { return this->content;}

void ClassificationSystem ::restore(Memento *mem) { this->content = mem->getState();}

Memento* ClassificationSystem ::save(){return new Memento(this->content);}

void ClassificationSystem::showContent() {std::cout << content << std::endl;}

void ClassificationSystem ::subcribe(Subcriber *sub) {this->subscribers.push_back(sub);}

void ClassificationSystem ::unsubscribe(int num) {
    if (this->subscribers.size() > num)
        this->subscribers.erase(this->subscribers.begin() + num);
    else
        std::cout << "wrong number!" << std::endl;
}

void  ClassificationSystem ::notify() {
    for(int i = 0; i < this->subscribers.size(); i ++)
        subscribers[i]->update();
}

std::string Memento ::getState() { return this->str;}

Memento ::Memento(std::string str){this->str = str;}