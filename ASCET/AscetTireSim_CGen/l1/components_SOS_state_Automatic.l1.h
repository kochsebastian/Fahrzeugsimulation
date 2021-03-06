#ifndef _STRUCTURE_ASD_L1_components_SOS_state_Automatic
#define _STRUCTURE_ASD_L1_components_SOS_state_Automatic
/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_SOS_state_Automatic.l1.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Declarations for L1 node: components_SOS_state_Automatic
 *
 **/
#include "a_basdef.h"
#include "components_SOS_state_Automatic.h"

/**
 * local variables object structure 
 **/
struct L1_components_SOS_state_Automatic_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* sm;
	scalarWrapper_Obj* x;
	scalarWrapper_Obj* status;
	scalarWrapper_Obj* myDT;
	scalarWrapper_Obj* duration;
	scalarWrapper_Obj* y;
	scalarWrapper_Obj* run;
	scalarWrapper_Obj* aktiv;
	scalarWrapper_Obj* statelocation;
};

/**
 * static variables object structure 
 **/
typedef struct {
	ASDObjectHeader objectHeader;
} L1_components_SOS_state_Automatic_Class;

extern L1_components_SOS_state_Automatic_Class L1_components_SOS_state_Automatic_ClassObj;

/**
 * external functions 
 **/
extern void initClass_L1_components_SOS_state_Automatic (L1_components_SOS_state_Automatic_Class* _ASCET_class);
extern struct L1_components_SOS_state_Automatic_Obj* initInstance_L1_components_SOS_state_Automatic(const struct components_SOS_state_Automatic* self);
#endif /* _STRUCTURE_ASD_L1_components_SOS_state_Automatic */
