/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Sat, 12, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Class1.h"
//## auto_generated
#include "Class2.h"
//## auto_generated
#include "Class3.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            Class1 * p_Class1;
            Class2 * p_Class2;
            Class3 * p_Class3;
            p_Class1 = new Class1;
            p_Class1->startBehavior();
            p_Class2 = new Class2;
            p_Class2->startBehavior();
            p_Class3 = new Class3;
            p_Class3->startBehavior();
            //#[ configuration DefaultComponent::DefaultConfig 
            //#]
            OXF::start();
            delete p_Class1;
            delete p_Class2;
            delete p_Class3;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/
