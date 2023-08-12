/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Class2
//!	Generated Date	: Sat, 12, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\Class2.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Class2.h"
//## package Default

//## class Class2
Class2::Class2(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Class2::~Class2() {
}

bool Class2::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Class2::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Class2::rootState_entDef() {
    {
        //#[ transition 0 
        std::cout << "Default transition in Class2" << std::endl;
        //#]
        rootState_subState = state_0;
        rootState_active = state_0;
        //#[ state ROOT.state_0.(Entry) 
        std::cout << "state_0 in Class2" << std::endl;
        //#]
    }
}

IOxfReactive::TakeEventStatus Class2::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Class2.cpp
*********************************************************************/
