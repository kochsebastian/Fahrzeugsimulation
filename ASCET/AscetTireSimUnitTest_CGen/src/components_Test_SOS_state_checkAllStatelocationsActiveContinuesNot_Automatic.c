/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    22.03.2019 09:51:44
*
* @brief   "components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_Automatic.h"
#include "AscetTireSimUnitTest_Automatic.h"
#include "assertLib_Assert_Impl.h"


/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * model name:...................................'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot'
 * data set:.....................................'COMPONENTS_TEST_SOS_STATE_CHECKALLSTATELOCATIONSACTIVECONTINUESNOT_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_Automatic_RAM_SUBSTRUCT components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM = {
   /* struct element:'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter' (modeled as:'counter.components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot') */
   0,
   /* substruct: components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos (modeled as:'sos.components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot') */
   {
      /* struct element:'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.duration' (modeled as:'duration.sos.components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot') */
      0.0F,
      /* struct element:'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.myDT' (modeled as:'myDT.sos.components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot') */
      0.0F,
      /* struct element:'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.run' (modeled as:'run.sos.components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot') */
      0,
      /* struct element:'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation' (modeled as:'statelocation.sos.components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot') */
      0.0F,
      /* struct element:'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.status' (modeled as:'status.sos.components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot') */
      0,
      /* struct element:'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.x' (modeled as:'x.sos.components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot') */
      0,
      /* struct element:'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.y' (modeled as:'y.sos.components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot') */
      0,
      /* struct element:'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.aktiv' (modeled as:'aktiv.sos.components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot') */
      false,
      /* struct element:'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.sm' (modeled as:'sm.sos.components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot') */
      0U
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF COMPONENT VARIABLE 'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot'
 * data set:.....................................'COMPONENTS_TEST_SOS_STATE_CHECKALLSTATELOCATIONSACTIVECONTINUESNOT_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
const struct components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_Automatic components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot = {
   /* substruct: components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos (modeled as:'sos.components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot') */
   {
      /* type descriptor pointer 'components_SOS_state_Automatic_RAM' for memory class substruct for 'RAM' */
      &components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF COMPONENT VARIABLE 'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot'
 ******************************************************************************/







/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_Automatic_checkAllStatelocationsActiveContinuesNot'
 * ----------------------------------------------------------------------------
 * model name:...................................'checkAllStatelocationsActiveContinuesNot'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_Automatic_checkAllStatelocationsActiveContinuesNot (void)
{
   components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter = 0;
   components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.myDT = 0.1F;
   components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.aktiv = true;
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 9)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 1.0, 0.1);
   components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.aktiv = false;
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 18)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 2.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 27)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 1.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 36)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 2.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 45)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 1.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 54)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 2.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 71)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 3.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 88)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 4.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 105)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 3.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 122)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 4.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 139)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 3.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 156)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 4.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 165)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 1.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 174)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 2.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 183)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 1.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 192)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 2.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 201)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 1.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 210)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 2.0, 0.1);
   while (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter < 240)
   {
      components_SOS_state_Automatic_sOS_stateStatemachineTrigger(&(components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot.sos));
      components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter
         = ((components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter <= 2147483646L) ? (components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.counter + 1) : 2147483647L);
   } /* end while */
   ASSERT_NEAR((float64)components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_RAM.sos.statelocation, 0.0, 0.1);
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_Test_SOS_state_checkAllStatelocationsActiveContinuesNot_Automatic_checkAllStatelocationsActiveContinuesNot'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



