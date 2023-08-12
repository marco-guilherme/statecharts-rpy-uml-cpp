/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Class3
//!	Generated Date	: Sat, 12, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\Class3.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Class3.h"
//## package Default

//## class Class3
Class3::Class3(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Class3::~Class3() {
}

bool Class3::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Class3::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Class3::rootState_entDef() {
    {
        pushNullTransition();
        rootState_subState = state_0;
        rootState_active = state_0;
        //#[ state ROOT.state_0.(Entry) 
        std::cout << "state_0 in Class3" << std::endl;
        //#]
    }
}

IOxfReactive::TakeEventStatus Class3::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(rootState_active == state_0)
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    //#[ transition 1 
                    std::cout << "state_0 to state_1 in Class3" << std::endl;
                    //#]
                    rootState_subState = state_1;
                    rootState_active = state_1;
                    //#[ state ROOT.state_1.(Entry) 
                    std::cout << "state_1 in Class3" << std::endl;
                    //#]
                    res = eventConsumed;
                }
            
        }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Class3.cpp
*********************************************************************/
