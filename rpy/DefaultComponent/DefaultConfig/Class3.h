/*********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Class3
//!	Generated Date	: Sat, 12, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\Class3.h
*********************************************************************/

#ifndef Class3_H
#define Class3_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## package Default

//## class Class3
class Class3 : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Class3(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Class3();
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // state_1:
    //## statechart_method
    inline bool state_1_IN() const;
    
    // state_0:
    //## statechart_method
    inline bool state_0_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Class3_Enum {
        OMNonState = 0,
        state_1 = 1,
        state_0 = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool Class3::rootState_IN() const {
    return true;
}

inline bool Class3::state_1_IN() const {
    return rootState_subState == state_1;
}

inline bool Class3::state_0_IN() const {
    return rootState_subState == state_0;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Class3.h
*********************************************************************/
