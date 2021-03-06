/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_Model_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    22.03.2019 09:25:43
*
* @brief   "components_Model>>Automatic (module code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_Model_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/



#define delta_sfl_VAL (self->components_Model_Automatic_RAM->delta_sfl)
#define delta_sfr_VAL (self->components_Model_Automatic_RAM->delta_sfr)
#define delta_srl_VAL (self->components_Model_Automatic_RAM->delta_srl)
#define delta_srr_VAL (self->components_Model_Automatic_RAM->delta_srr)
#define RingBuffer_instance_2_REF (&(self->RingBuffer_instance_2))
#define RingBuffer_instance_3_REF (&(self->RingBuffer_instance_3))
#define RingBuffer_instance_4_REF (&(self->RingBuffer_instance_4))
#define RingBuffer_instance_REF (&(self->RingBuffer_instance))
#define sfl_before_VAL (self->components_Model_Automatic_RAM->sfl_before)
#define sfl_VAL (self->components_Model_Automatic_RAM->sfl)
#define sfr_before_VAL (self->components_Model_Automatic_RAM->sfr_before)
#define sfr_VAL (self->components_Model_Automatic_RAM->sfr)
#define srl_before_VAL (self->components_Model_Automatic_RAM->srl_before)
#define srl_VAL (self->components_Model_Automatic_RAM->srl)
#define srr_before_VAL (self->components_Model_Automatic_RAM->srr_before)
#define srr_VAL (self->components_Model_Automatic_RAM->srr)


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_Model_Automatic_calc'
 * ----------------------------------------------------------------------------
 * model name:...................................'calc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void components_Model_Automatic_calc (
               const struct components_Model_Automatic * self,
   /* IN    */ const float32                             vfr,
   /* IN    */ const float32                             vrr,
   /* IN    */ const float32                             vfl,
   /* IN    */ const float32                             vrl,
   /* IN    */ const float32                             my_dT
   )
{
   sfl_VAL = sfl_VAL + (vfl * my_dT);
   sfr_VAL = sfr_VAL + (vfr * my_dT);
   srl_VAL = srl_VAL + (vrl * my_dT);
   srr_VAL = srr_VAL + (vrr * my_dT);
   sfl_before_VAL
      = components_RingBuffer_Automatic_getLast(RingBuffer_instance_REF);
   sfr_before_VAL
      = components_RingBuffer_Automatic_getLast(RingBuffer_instance_2_REF);
   srl_before_VAL
      = components_RingBuffer_Automatic_getLast(RingBuffer_instance_3_REF);
   srr_before_VAL
      = components_RingBuffer_Automatic_getLast(RingBuffer_instance_4_REF);
   delta_sfl_VAL = sfl_VAL - sfl_before_VAL;
   delta_sfr_VAL = sfr_VAL - sfr_before_VAL;
   delta_srl_VAL = srl_VAL - srl_before_VAL;
   delta_srr_VAL = srr_VAL - srr_before_VAL;
   components_RingBuffer_Automatic_put(RingBuffer_instance_REF, sfl_VAL);
   components_RingBuffer_Automatic_put(RingBuffer_instance_2_REF, sfr_VAL);
   components_RingBuffer_Automatic_put(RingBuffer_instance_3_REF, srl_VAL);
   components_RingBuffer_Automatic_put(RingBuffer_instance_4_REF, srr_VAL);
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_Model_Automatic_calc'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_Model_Automatic_getDiff_sfl'
 * ----------------------------------------------------------------------------
 * model name:...................................'getDiff_sfl'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_Model_Automatic_getDiff_sfl ( const struct components_Model_Automatic * self)
{
   return delta_sfl_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_Model_Automatic_getDiff_sfl'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_Model_Automatic_getDiff_sfr'
 * ----------------------------------------------------------------------------
 * model name:...................................'getDiff_sfr'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_Model_Automatic_getDiff_sfr ( const struct components_Model_Automatic * self)
{
   return delta_sfr_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_Model_Automatic_getDiff_sfr'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_Model_Automatic_getDiff_srl'
 * ----------------------------------------------------------------------------
 * model name:...................................'getDiff_srl'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_Model_Automatic_getDiff_srl ( const struct components_Model_Automatic * self)
{
   return delta_srl_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_Model_Automatic_getDiff_srl'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_Model_Automatic_getDiff_srr'
 * ----------------------------------------------------------------------------
 * model name:...................................'getDiff_srr'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_Model_Automatic_getDiff_srr ( const struct components_Model_Automatic * self)
{
   return delta_srr_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_Model_Automatic_getDiff_srr'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_Model_Automatic_getSfl'
 * ----------------------------------------------------------------------------
 * model name:...................................'getSfl'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_Model_Automatic_getSfl ( const struct components_Model_Automatic * self)
{
   return sfl_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_Model_Automatic_getSfl'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_Model_Automatic_getSfr'
 * ----------------------------------------------------------------------------
 * model name:...................................'getSfr'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_Model_Automatic_getSfr ( const struct components_Model_Automatic * self)
{
   return sfr_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_Model_Automatic_getSfr'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_Model_Automatic_getSrl'
 * ----------------------------------------------------------------------------
 * model name:...................................'getSrl'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_Model_Automatic_getSrl ( const struct components_Model_Automatic * self)
{
   return srl_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_Model_Automatic_getSrl'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_Model_Automatic_getSrr'
 * ----------------------------------------------------------------------------
 * model name:...................................'getSrr'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_Model_Automatic_getSrr ( const struct components_Model_Automatic * self)
{
   return srr_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_Model_Automatic_getSrr'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



