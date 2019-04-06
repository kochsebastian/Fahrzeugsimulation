/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_TireMeanTest_calcMeanAllValuesTheSame_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    22.03.2019 09:51:44
*
* @brief   "components_TireMeanTest_calcMeanAllValuesTheSame>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_TireMeanTest_calcMeanAllValuesTheSame_Automatic.h"
#include "AscetTireSimUnitTest_Automatic.h"
#include "assertLib_Assert_Impl.h"


/******************************************************************************
 * DEFINITION OF COMPONENT VARIABLE OMITTED
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'components_TireMeanTest_calcMeanAllValuesTheSame'
 * reason:.......................................no local elements
 * ---------------------------------------------------------------------------*/







/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_TireMeanTest_calcMeanAllValuesTheSame_Automatic_calcMeanAllValuesTheSame'
 * ----------------------------------------------------------------------------
 * model name:...................................'calcMeanAllValuesTheSame'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void components_TireMeanTest_calcMeanAllValuesTheSame_Automatic_calcMeanAllValuesTheSame (void)
{
   /* user defined local variables */
   float32 mean;
   float32 v1;

   v1 = 50.0F;
   mean = components_TireMean_Automatic_calc(v1, v1, v1, v1);
   ASSERT_NEAR((float64)mean, (float64)v1, 0.1);
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_TireMeanTest_calcMeanAllValuesTheSame_Automatic_calcMeanAllValuesTheSame'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/


