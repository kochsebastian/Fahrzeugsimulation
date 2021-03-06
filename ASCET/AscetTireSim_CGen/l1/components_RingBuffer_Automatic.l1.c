/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_RingBuffer_Automatic.l1.c
 *
 * @author  Generated by ASCET
 *
 * @brief   Definitions for L1 node: components_RingBuffer_Automatic
 *
 **/
#include "components_RingBuffer_Automatic.l1.h"
#include "components_RingBuffer_Automatic_private.h"

/**
 * Class initialization 
 **/
void initClass_L1_components_RingBuffer_Automatic (L1_components_RingBuffer_Automatic_Class* _ASCET_class)
{
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
static ASDClassHeader L1_components_RingBuffer_Automatic_ClassHeader = {
	0, 0, 3, 0, &_ObjectMethodList, &_ClassMethodList
};

L1_components_RingBuffer_Automatic_Class L1_components_RingBuffer_Automatic_ClassObj = {{1, {&L1_components_RingBuffer_Automatic_ClassHeader}, {0}}};

bool initialized_components_RingBuffer_Automatic = false;

/**
 * Initialize this L1 component 
 **/
struct L1_components_RingBuffer_Automatic_Obj* initInstance_L1_components_RingBuffer_Automatic(const struct components_RingBuffer_Automatic* self)
{
    struct L1_components_RingBuffer_Automatic_Obj* L1_Instance = NULL;
    if (!initialized_components_RingBuffer_Automatic) {
        /* for first time also static class data shall be initialized */
        initialized_components_RingBuffer_Automatic = true;
        initClass_L1_components_RingBuffer_Automatic(&L1_components_RingBuffer_Automatic_ClassObj);
    }

    /* create L1 object and initialize it */
    CREATE_OBJECT (L1_Instance, L1_components_RingBuffer_Automatic);
    L1_Instance->buffer = initInstance_vectorWrapper((uint32)&buffer_VAL, sizeof(float32), 1000, ASD_VARIABLE);
    L1_Instance->c = initInstance_scalarWrapper((uint32)&c_VAL, sizeof(float32), ASD_VARIABLE);
    L1_Instance->swap = initInstance_scalarWrapper((uint32)&swap_VAL, sizeof(float32), ASD_VARIABLE);

    return L1_Instance;
}
