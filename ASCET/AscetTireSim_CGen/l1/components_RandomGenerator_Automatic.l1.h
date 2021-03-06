#ifndef _STRUCTURE_ASD_L1_components_RandomGenerator_Automatic
#define _STRUCTURE_ASD_L1_components_RandomGenerator_Automatic
/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_RandomGenerator_Automatic.l1.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Declarations for L1 node: components_RandomGenerator_Automatic
 *
 **/
#include "a_basdef.h"
#include "components_RandomGenerator_Automatic.h"

/**
 * local variables object structure 
 **/
struct L1_components_RandomGenerator_Automatic_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* a;
	scalarWrapper_Obj* m;
	scalarWrapper_Obj* c;
	scalarWrapper_Obj* seed;
	scalarWrapper_Obj* x;
};

/**
 * static variables object structure 
 **/
typedef struct {
	ASDObjectHeader objectHeader;
} L1_components_RandomGenerator_Automatic_Class;

extern L1_components_RandomGenerator_Automatic_Class L1_components_RandomGenerator_Automatic_ClassObj;

/**
 * external functions 
 **/
extern void initClass_L1_components_RandomGenerator_Automatic (L1_components_RandomGenerator_Automatic_Class* _ASCET_class);
extern struct L1_components_RandomGenerator_Automatic_Obj* initInstance_L1_components_RandomGenerator_Automatic(const struct components_RandomGenerator_Automatic* self);
#endif /* _STRUCTURE_ASD_L1_components_RandomGenerator_Automatic */
