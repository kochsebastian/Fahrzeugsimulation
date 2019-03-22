/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_RandomGenerator_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    22.03.2019 09:51:44
*
* @brief   "components_RandomGenerator>>Automatic (module code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_RandomGenerator_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/





/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_RandomGenerator_Automatic_calc'
 * ----------------------------------------------------------------------------
 * model name:...................................'calc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_RandomGenerator_Automatic_calc (
               const struct components_RandomGenerator_Automatic * self,
   /* IN    */ const float32                                       set_vel,
   /* IN    */ const float32                                       noiselevel,
   /* IN    */ const sint32                                        mySeed
   )
{
   /* temp. variables */
   sint32 _t1sint32;
   uint32 _t1uint32;
   float32 _t1real32;

   if ((sint32)self->components_RandomGenerator_Automatic_RAM->x == 0)
   {
      _t1sint32 = ((mySeed >= 0) ? (((mySeed <= 1024) ? mySeed : 1024)) : 0);
      self->components_RandomGenerator_Automatic_RAM->x = (uint16)_t1sint32;
   } /* end if */
   _t1uint32
      = ((uint32)self->components_RandomGenerator_Automatic_RAM->x * self->components_RandomGenerator_Automatic_CAL_MEM->a) + self->components_RandomGenerator_Automatic_CAL_MEM->c;
   self->components_RandomGenerator_Automatic_RAM->x
      = (uint16)(((self->components_RandomGenerator_Automatic_CAL_MEM->m == 0U) ? (((_t1uint32 <= 1023U) ? _t1uint32 : 1023U)) : (_t1uint32 % self->components_RandomGenerator_Automatic_CAL_MEM->m)));
   _t1real32
      = noiselevel * ((float32)self->components_RandomGenerator_Automatic_RAM->x - ((float32)self->components_RandomGenerator_Automatic_CAL_MEM->m * 0.5F)) * 2.0F;
   return set_vel + ((((float32)self->components_RandomGenerator_Automatic_CAL_MEM->m == 0.0F) ? _t1real32 : (_t1real32 / (float32)self->components_RandomGenerator_Automatic_CAL_MEM->m)));
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_RandomGenerator_Automatic_calc'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



