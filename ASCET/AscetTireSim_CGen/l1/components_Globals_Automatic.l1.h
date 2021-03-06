#ifndef _STRUCTURE_ASD_L1_components_Globals_Automatic
#define _STRUCTURE_ASD_L1_components_Globals_Automatic
/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_Globals_Automatic.l1.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Declarations for L1 node: components_Globals_Automatic
 *
 **/
#include "a_basdef.h"
#include "components_Globals_Automatic.h"

/**
 * local variables object structure 
 **/
struct L1_components_Globals_Automatic_Obj {
	ASDObjectHeader objectHeader;
};

/**
 * static variables object structure 
 **/
typedef struct {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* limit;
	scalarWrapper_Obj* limit_RR;
	scalarWrapper_Obj* limit_RL;
	scalarWrapper_Obj* limit_FR;
	scalarWrapper_Obj* limit_FL;
} L1_components_Globals_Automatic_Class;

extern L1_components_Globals_Automatic_Class L1_components_Globals_Automatic_ClassObj;

/**
 * external functions 
 **/
extern void initClass_L1_components_Globals_Automatic (L1_components_Globals_Automatic_Class* _ASCET_class);
extern struct L1_components_Globals_Automatic_Obj* initInstance_L1_components_Globals_Automatic(void);
#endif /* _STRUCTURE_ASD_L1_components_Globals_Automatic */
