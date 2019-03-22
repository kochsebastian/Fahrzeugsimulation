/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_TireMeanTest_calcMeanNegativ_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    22.03.2019 09:51:44
*
* @brief   "components_TireMeanTest_calcMeanNegativ>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_TireMeanTest_calcMeanNegativ_Automatic.h"
#include "AscetTireSimUnitTest_Automatic.h"
#include "assertLib_Assert_Impl.h"


/******************************************************************************
 * DEFINITION OF COMPONENT VARIABLE OMITTED
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'components_TireMeanTest_calcMeanNegativ'
 * reason:.......................................no local elements
 * ---------------------------------------------------------------------------*/







/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_TireMeanTest_calcMeanNegativ_Automatic_calcMeanNegativ'
 * ----------------------------------------------------------------------------
 * model name:...................................'calcMeanNegativ'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void components_TireMeanTest_calcMeanNegativ_Automatic_calcMeanNegativ (void)
{
   /* user defined local variables */
   float32 mean;
   float32 v1;
   float32 v2;
   float32 v3;
   float32 v4;

   v1 = -50.0F;
   v2 = -15.0F;
   v3 = -75.0F;
   v4 = -100.5F;
   mean = components_TireMean_Automatic_calc(v1, v2, v3, v4);
   ASSERT_NEAR((float64)mean, -60.13, 0.1);
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_TireMeanTest_calcMeanNegativ_Automatic_calcMeanNegativ'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



