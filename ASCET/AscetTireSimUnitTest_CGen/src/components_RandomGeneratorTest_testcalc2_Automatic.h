#ifndef _ASD_COMPONENTS_RANDOMGENERATORTEST_TESTCALC2_AUTOMATIC_H_
#define _ASD_COMPONENTS_RANDOMGENERATORTEST_TESTCALC2_AUTOMATIC_H_
/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_RandomGeneratorTest_testcalc2_Automatic.h
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    22.03.2019 09:51:44
*
* @brief   "components_RandomGeneratorTest_testcalc2>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "components_RandomGenerator_Automatic.h"
#include "components_RingBuffer_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_RandomGeneratorTest_testcalc2_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct components_RandomGeneratorTest_testcalc2_Automatic_CAL_MEM_SUBSTRUCT {
   struct components_RandomGenerator_Automatic_CAL_MEM_SUBSTRUCT rg;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_RandomGeneratorTest_testcalc2_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_RandomGeneratorTest_testcalc2_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct components_RandomGeneratorTest_testcalc2_Automatic_RAM_SUBSTRUCT {
   struct components_RingBuffer_Automatic_RAM_SUBSTRUCT rb;
   struct components_RandomGenerator_Automatic_RAM_SUBSTRUCT rg;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_RandomGeneratorTest_testcalc2_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_RandomGeneratorTest_testcalc2_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct components_RandomGeneratorTest_testcalc2_Automatic {
   struct components_RingBuffer_Automatic rb;
   struct components_RandomGenerator_Automatic rg;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_RandomGeneratorTest_testcalc2_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: components_RandomGeneratorTest_testcalc2_Automatic */
#define _components_RandomGeneratorTest_testcalc2_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'components_RandomGeneratorTest_testcalc2_CAL_MEM' */
/* containing 'CAL_MEM' memory class tree */
extern const volatile struct components_RandomGeneratorTest_testcalc2_Automatic_CAL_MEM_SUBSTRUCT components_RandomGeneratorTest_testcalc2_CAL_MEM;

/* forward declaration of substruct variable 'components_RandomGeneratorTest_testcalc2_RAM' */
/* containing 'RAM' memory class tree */
extern struct components_RandomGeneratorTest_testcalc2_Automatic_RAM_SUBSTRUCT components_RandomGeneratorTest_testcalc2_RAM;

/* forward declaration of component variable 'components_RandomGeneratorTest_testcalc2' */
/* containing 'ROM' memory class tree */
extern const struct components_RandomGeneratorTest_testcalc2_Automatic components_RandomGeneratorTest_testcalc2;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module components_RandomGeneratorTest_testcalc2_Automatic
 ******************************************************************************/
extern void components_RandomGeneratorTest_testcalc2_Automatic_testcalc2 (void);



#endif /* _ASD_COMPONENTS_RANDOMGENERATORTEST_TESTCALC2_AUTOMATIC_H_ */
