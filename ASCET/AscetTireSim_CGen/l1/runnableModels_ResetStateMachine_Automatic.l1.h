#ifndef _STRUCTURE_ASD_L1_runnableModels_ResetStateMachine_Automatic
#define _STRUCTURE_ASD_L1_runnableModels_ResetStateMachine_Automatic
/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    runnableModels_ResetStateMachine_Automatic.l1.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Declarations for L1 node: runnableModels_ResetStateMachine_Automatic
 *
 **/
#include "a_basdef.h"
#include "runnableModels_ResetStateMachine_Automatic.h"

/**
 * local variables object structure 
 **/
struct L1_runnableModels_ResetStateMachine_Automatic_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* sm;
	scalarWrapper_Obj* reset;
	scalarWrapper_Obj* myDT;
	scalarWrapper_Obj* delta_xx;
	scalarWrapper_Obj* mean;
	scalarWrapper_Obj* new_limit;
	scalarWrapper_Obj* duration;
	scalarWrapper_Obj* diff_xx;
	scalarWrapper_Obj* limit;
	scalarWrapper_Obj* setDone;
	scalarWrapper_Obj* noFailure;
};

/**
 * static variables object structure 
 **/
typedef struct {
	ASDObjectHeader objectHeader;
} L1_runnableModels_ResetStateMachine_Automatic_Class;

extern L1_runnableModels_ResetStateMachine_Automatic_Class L1_runnableModels_ResetStateMachine_Automatic_ClassObj;

/**
 * external functions 
 **/
extern void initClass_L1_runnableModels_ResetStateMachine_Automatic (L1_runnableModels_ResetStateMachine_Automatic_Class* _ASCET_class);
extern struct L1_runnableModels_ResetStateMachine_Automatic_Obj* initInstance_L1_runnableModels_ResetStateMachine_Automatic(const struct runnableModels_ResetStateMachine_Automatic* self);
#endif /* _STRUCTURE_ASD_L1_runnableModels_ResetStateMachine_Automatic */
