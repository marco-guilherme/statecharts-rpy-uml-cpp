/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Class1
//!	Generated Date	: Sat, 12, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\Class1.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Class1.h"
//## package Default

//## class Class1
Class1::Class1(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Class1::~Class1() {
}

bool Class1::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Class1::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Class1::rootState_entDef() {
    {
        rootState_subState = state_0;
        rootState_active = state_0;
        //#[ state ROOT.state_0.(Entry) 
        std::cout << "state_0 in Class1" << std::endl;
        //#]
    }
}

IOxfReactive::TakeEventStatus Class1::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Class1.cpp
*********************************************************************/
