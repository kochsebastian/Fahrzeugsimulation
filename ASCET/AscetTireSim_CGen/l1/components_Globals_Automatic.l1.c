/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_Globals_Automatic.l1.c
 *
 * @author  Generated by ASCET
 *
 * @brief   Definitions for L1 node: components_Globals_Automatic
 *
 **/
#include "components_Globals_Automatic.l1.h"
#include "components_Globals_Automatic_private.h"

/**
 * Class initialization 
 **/
void initClass_L1_components_Globals_Automatic (L1_components_Globals_Automatic_Class* _ASCET_class)
{
    _ASCET_class->limit = initInstance_scalarWrapper((uint32)&components_Globals_limit_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->limit_RR = initInstance_scalarWrapper((uint32)&components_Globals_limit_RR_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->limit_RL = initInstance_scalarWrapper((uint32)&components_Globals_limit_RL_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->limit_FR = initInstance_scalarWrapper((uint32)&components_Globals_limit_FR_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->limit_FL = initInstance_scalarWrapper((uint32)&components_Globals_limit_FL_VAL, sizeof(float32), ASD_VARIABLE);
}


static MethodList _ObjectMethodList = {
    ((void *)0)
};

static MethodList _ClassMethodList = {
    ((void *)0)
};

/**
 * Global objects 
 **/
struct L1_components_Globals_Automatic_Obj* L1_components_Globals_AutomaticInstance = NULL;

static ASDClassHeader L1_components_Globals_Automatic_ClassHeader = {
	0, 0, 0, 5, &_ObjectMethodList, &_ClassMethodList
};

L1_components_Globals_Automatic_Class L1_components_Globals_Automatic_ClassObj = {{1, {&L1_components_Globals_Automatic_ClassHeader}, {0}}};

bool initialized_components_Globals_Automatic = false;

/**
 * Initialize this L1 component 
 **/
struct L1_components_Globals_Automatic_Obj* initInstance_L1_components_Globals_Automatic(void)
{
    struct L1_components_Globals_Automatic_Obj* L1_Instance = NULL;
    if (!initialized_components_Globals_Automatic) {
        /* for first time also static class data shall be initialized */
        initialized_components_Globals_Automatic = true;
        initClass_L1_components_Globals_Automatic(&L1_components_Globals_Automatic_ClassObj);
    }

    /* create L1 object and initialize it */
    CREATE_OBJECT (L1_Instance, L1_components_Globals_Automatic);
    L1_components_Globals_AutomaticInstance = L1_Instance;

    return L1_Instance;
}
