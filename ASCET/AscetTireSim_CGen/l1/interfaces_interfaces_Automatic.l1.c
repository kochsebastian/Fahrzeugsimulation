/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    interfaces_interfaces_Automatic.l1.c
 *
 * @author  Generated by ASCET
 *
 * @brief   Definitions for L1 node: interfaces_interfaces_Automatic
 *
 **/
#include "interfaces_interfaces_Automatic.l1.h"
#include "interfaces_interfaces_Automatic_private.h"

/**
 * Class initialization 
 **/
void initClass_L1_interfaces_interfaces_Automatic (L1_interfaces_interfaces_Automatic_Class* _ASCET_class)
{
    _ASCET_class->failure_detected = initInstance_scalarWrapper((uint32)&interfaces_interfaces_failure_detected_VAL, sizeof(uint8), ASD_VARIABLE);
    _ASCET_class->vfr = initInstance_scalarWrapper((uint32)&interfaces_interfaces_vfr_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->vfl = initInstance_scalarWrapper((uint32)&interfaces_interfaces_vfl_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->vrl = initInstance_scalarWrapper((uint32)&interfaces_interfaces_vrl_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->vrr = initInstance_scalarWrapper((uint32)&interfaces_interfaces_vrr_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->delta_sfr = initInstance_scalarWrapper((uint32)&interfaces_interfaces_delta_sfr_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->delta_sfl = initInstance_scalarWrapper((uint32)&interfaces_interfaces_delta_sfl_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->delta_srr = initInstance_scalarWrapper((uint32)&interfaces_interfaces_delta_srr_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->delta_srl = initInstance_scalarWrapper((uint32)&interfaces_interfaces_delta_srl_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->sfr = initInstance_scalarWrapper((uint32)&interfaces_interfaces_sfr_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->sfl = initInstance_scalarWrapper((uint32)&interfaces_interfaces_sfl_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->srl = initInstance_scalarWrapper((uint32)&interfaces_interfaces_srl_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->srr = initInstance_scalarWrapper((uint32)&interfaces_interfaces_srr_VAL, sizeof(float32), ASD_VARIABLE);
    _ASCET_class->noFailure = initInstance_scalarWrapper((uint32)&interfaces_interfaces_noFailure_VAL, sizeof(uint8), ASD_VARIABLE);
    _ASCET_class->mean = initInstance_scalarWrapper((uint32)&interfaces_interfaces_mean_VAL, sizeof(float32), ASD_VARIABLE);
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
struct L1_interfaces_interfaces_Automatic_Obj* L1_interfaces_interfaces_AutomaticInstance = NULL;

static ASDClassHeader L1_interfaces_interfaces_Automatic_ClassHeader = {
	0, 0, 0, 15, &_ObjectMethodList, &_ClassMethodList
};

L1_interfaces_interfaces_Automatic_Class L1_interfaces_interfaces_Automatic_ClassObj = {{1, {&L1_interfaces_interfaces_Automatic_ClassHeader}, {0}}};

bool initialized_interfaces_interfaces_Automatic = false;

/**
 * Initialize this L1 component 
 **/
struct L1_interfaces_interfaces_Automatic_Obj* initInstance_L1_interfaces_interfaces_Automatic(void)
{
    struct L1_interfaces_interfaces_Automatic_Obj* L1_Instance = NULL;
    if (!initialized_interfaces_interfaces_Automatic) {
        /* for first time also static class data shall be initialized */
        initialized_interfaces_interfaces_Automatic = true;
        initClass_L1_interfaces_interfaces_Automatic(&L1_interfaces_interfaces_Automatic_ClassObj);
    }

    /* create L1 object and initialize it */
    CREATE_OBJECT (L1_Instance, L1_interfaces_interfaces_Automatic);
    L1_interfaces_interfaces_AutomaticInstance = L1_Instance;

    return L1_Instance;
}
