/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_RingBuffer_Automatic.c
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

#include "globalH.h"
#include "components_RingBuffer_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/



#define buffer_VAL (self->components_RingBuffer_Automatic_RAM->buffer)
#define c_VAL (self->components_RingBuffer_Automatic_RAM->c)
#define swap_VAL (self->components_RingBuffer_Automatic_RAM->swap)


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_RingBuffer_Automatic_getIndex'
 * ----------------------------------------------------------------------------
 * model name:...................................'getIndex'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_RingBuffer_Automatic_getIndex (
               const struct components_RingBuffer_Automatic * self,
   /* IN    */ const sint32                                   i
   )
{
   return buffer_VAL[((i >= 0) ? (((i <= 999) ? i : 999)) : 0)];
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_RingBuffer_Automatic_getIndex'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_RingBuffer_Automatic_getLast'
 * ----------------------------------------------------------------------------
 * model name:...................................'getLast'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_RingBuffer_Automatic_getLast ( const struct components_RingBuffer_Automatic * self)
{
   return buffer_VAL[999U];
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_RingBuffer_Automatic_getLast'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_RingBuffer_Automatic_put'
 * ----------------------------------------------------------------------------
 * model name:...................................'put'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void components_RingBuffer_Automatic_put (
               const struct components_RingBuffer_Automatic * self,
   /* IN    */ const float32                                  element
   )
{
   /* user defined local variables */
   uint16 i;

   swap_VAL = element;
   for (i = 0U;true;i++)
   {
      c_VAL = buffer_VAL[i];
      buffer_VAL[i] = swap_VAL;
      swap_VAL = c_VAL;
      if (i == 999U)
      {
         break;
      } /* end if */
   } /* end for */
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_RingBuffer_Automatic_put'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



