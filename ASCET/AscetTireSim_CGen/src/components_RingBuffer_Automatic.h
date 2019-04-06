#ifndef _ASD_COMPONENTS_RINGBUFFER_AUTOMATIC_H_
#define _ASD_COMPONENTS_RINGBUFFER_AUTOMATIC_H_
/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_RingBuffer_Automatic.h
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    22.03.2019 09:25:43
*
* @brief   "components_RingBuffer>>Automatic (module code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'components_RingBuffer_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct components_RingBuffer_Automatic_RAM_SUBSTRUCT {
   float32 buffer[1000];
   float32 c;
   float32 swap;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'components_RingBuffer_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR CLASS 'components_RingBuffer_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct components_RingBuffer_Automatic {
   struct components_RingBuffer_Automatic_RAM_SUBSTRUCT * components_RingBuffer_Automatic_RAM;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR CLASS 'components_RingBuffer_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ............components_RingBuffer_Automatic */
#define _components_RingBuffer_Automatic_TYPE_DEF_




/******************************************************************************
 * BEGIN: declaration of global C functions defined by class components_RingBuffer_Automatic
 ******************************************************************************/
extern float32 components_RingBuffer_Automatic_getIndex (
               const struct components_RingBuffer_Automatic * self,
   /* IN    */ const sint32                                   i
   );
extern float32 components_RingBuffer_Automatic_getLast ( const struct components_RingBuffer_Automatic * self);
extern void components_RingBuffer_Automatic_put (
               const struct components_RingBuffer_Automatic * self,
   /* IN    */ const float32                                  element
   );



#endif /* _ASD_COMPONENTS_RINGBUFFER_AUTOMATIC_H_ */