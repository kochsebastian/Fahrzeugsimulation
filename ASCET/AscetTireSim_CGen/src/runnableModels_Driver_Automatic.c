/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    runnableModels_Driver_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    22.03.2019 09:25:43
*
* @brief   "runnableModels_Driver>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Defines
 *----------------------------------------------------------------------------*/

#define __ASD_REQUIRES_OS_INFACE

/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "runnableModels_Driver_Automatic.h"
#include "interfaces_interfaces_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'runnableModels_Driver_CAL_MEM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * model name:...................................'runnableModels_Driver'
 * data set:.....................................'RUNNABLEMODELS_DRIVER_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct runnableModels_Driver_Automatic_CAL_MEM_SUBSTRUCT runnableModels_Driver_CAL_MEM = {
   /* struct element:'runnableModels_Driver_CAL_MEM.base_noiselevel' (modeled as:'base_noiselevel.runnableModels_Driver') */
   0.0F,
   /* struct element:'runnableModels_Driver_CAL_MEM.base_v' (modeled as:'base_v.runnableModels_Driver') */
   0.0F,
   /* struct element:'runnableModels_Driver_CAL_MEM.error_FL' (modeled as:'error_FL.runnableModels_Driver') */
   0.0F,
   /* struct element:'runnableModels_Driver_CAL_MEM.error_FR' (modeled as:'error_FR.runnableModels_Driver') */
   0.0F,
   /* struct element:'runnableModels_Driver_CAL_MEM.error_RL' (modeled as:'error_RL.runnableModels_Driver') */
   0.0F,
   /* struct element:'runnableModels_Driver_CAL_MEM.error_RR' (modeled as:'error_RR.runnableModels_Driver') */
   0.0F,
   /* struct element:'runnableModels_Driver_CAL_MEM.deflate_fl' (modeled as:'deflate_fl.runnableModels_Driver') */
   false,
   /* struct element:'runnableModels_Driver_CAL_MEM.deflate_fr' (modeled as:'deflate_fr.runnableModels_Driver') */
   false,
   /* struct element:'runnableModels_Driver_CAL_MEM.deflate_vrl' (modeled as:'deflate_vrl.runnableModels_Driver') */
   false,
   /* struct element:'runnableModels_Driver_CAL_MEM.deflate_vrr' (modeled as:'deflate_vrr.runnableModels_Driver') */
   false,
   /* substruct: runnableModels_Driver_CAL_MEM.RandomGenerator_instance (modeled as:'RandomGenerator_instance.runnableModels_Driver') */
   {
      /* struct element:'runnableModels_Driver_CAL_MEM.RandomGenerator_instance.a' (modeled as:'a.RandomGenerator_instance.runnableModels_Driver') */
      89U,
      /* struct element:'runnableModels_Driver_CAL_MEM.RandomGenerator_instance.c' (modeled as:'c.RandomGenerator_instance.runnableModels_Driver') */
      251U,
      /* struct element:'runnableModels_Driver_CAL_MEM.RandomGenerator_instance.m' (modeled as:'m.RandomGenerator_instance.runnableModels_Driver') */
      1024U
   },
   /* substruct: runnableModels_Driver_CAL_MEM.RandomGenerator_instance_2 (modeled as:'RandomGenerator_instance_2.runnableModels_Driver') */
   {
      /* struct element:'runnableModels_Driver_CAL_MEM.RandomGenerator_instance_2.a' (modeled as:'a.RandomGenerator_instance_2.runnableModels_Driver') */
      89U,
      /* struct element:'runnableModels_Driver_CAL_MEM.RandomGenerator_instance_2.c' (modeled as:'c.RandomGenerator_instance_2.runnableModels_Driver') */
      251U,
      /* struct element:'runnableModels_Driver_CAL_MEM.RandomGenerator_instance_2.m' (modeled as:'m.RandomGenerator_instance_2.runnableModels_Driver') */
      1024U
   },
   /* substruct: runnableModels_Driver_CAL_MEM.RandomGenerator_instance_3 (modeled as:'RandomGenerator_instance_3.runnableModels_Driver') */
   {
      /* struct element:'runnableModels_Driver_CAL_MEM.RandomGenerator_instance_3.a' (modeled as:'a.RandomGenerator_instance_3.runnableModels_Driver') */
      89U,
      /* struct element:'runnableModels_Driver_CAL_MEM.RandomGenerator_instance_3.c' (modeled as:'c.RandomGenerator_instance_3.runnableModels_Driver') */
      251U,
      /* struct element:'runnableModels_Driver_CAL_MEM.RandomGenerator_instance_3.m' (modeled as:'m.RandomGenerator_instance_3.runnableModels_Driver') */
      1024U
   },
   /* substruct: runnableModels_Driver_CAL_MEM.RandomGenerator_instance_4 (modeled as:'RandomGenerator_instance_4.runnableModels_Driver') */
   {
      /* struct element:'runnableModels_Driver_CAL_MEM.RandomGenerator_instance_4.a' (modeled as:'a.RandomGenerator_instance_4.runnableModels_Driver') */
      89U,
      /* struct element:'runnableModels_Driver_CAL_MEM.RandomGenerator_instance_4.c' (modeled as:'c.RandomGenerator_instance_4.runnableModels_Driver') */
      251U,
      /* struct element:'runnableModels_Driver_CAL_MEM.RandomGenerator_instance_4.m' (modeled as:'m.RandomGenerator_instance_4.runnableModels_Driver') */
      1024U
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'runnableModels_Driver_CAL_MEM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'runnableModels_Driver_RAM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * model name:...................................'runnableModels_Driver'
 * data set:.....................................'RUNNABLEMODELS_DRIVER_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct runnableModels_Driver_Automatic_RAM_SUBSTRUCT runnableModels_Driver_RAM = {
   /* struct element:'runnableModels_Driver_RAM.rand' (modeled as:'rand.runnableModels_Driver') */
   0.0F,
   /* substruct: runnableModels_Driver_RAM.RandomGenerator_instance (modeled as:'RandomGenerator_instance.runnableModels_Driver') */
   {
      /* struct element:'runnableModels_Driver_RAM.RandomGenerator_instance.seed' (modeled as:'seed.RandomGenerator_instance.runnableModels_Driver') */
      0U,
      /* struct element:'runnableModels_Driver_RAM.RandomGenerator_instance.x' (modeled as:'x.RandomGenerator_instance.runnableModels_Driver') */
      0U
   },
   /* substruct: runnableModels_Driver_RAM.RandomGenerator_instance_2 (modeled as:'RandomGenerator_instance_2.runnableModels_Driver') */
   {
      /* struct element:'runnableModels_Driver_RAM.RandomGenerator_instance_2.seed' (modeled as:'seed.RandomGenerator_instance_2.runnableModels_Driver') */
      0U,
      /* struct element:'runnableModels_Driver_RAM.RandomGenerator_instance_2.x' (modeled as:'x.RandomGenerator_instance_2.runnableModels_Driver') */
      0U
   },
   /* substruct: runnableModels_Driver_RAM.RandomGenerator_instance_3 (modeled as:'RandomGenerator_instance_3.runnableModels_Driver') */
   {
      /* struct element:'runnableModels_Driver_RAM.RandomGenerator_instance_3.seed' (modeled as:'seed.RandomGenerator_instance_3.runnableModels_Driver') */
      0U,
      /* struct element:'runnableModels_Driver_RAM.RandomGenerator_instance_3.x' (modeled as:'x.RandomGenerator_instance_3.runnableModels_Driver') */
      0U
   },
   /* substruct: runnableModels_Driver_RAM.RandomGenerator_instance_4 (modeled as:'RandomGenerator_instance_4.runnableModels_Driver') */
   {
      /* struct element:'runnableModels_Driver_RAM.RandomGenerator_instance_4.seed' (modeled as:'seed.RandomGenerator_instance_4.runnableModels_Driver') */
      0U,
      /* struct element:'runnableModels_Driver_RAM.RandomGenerator_instance_4.x' (modeled as:'x.RandomGenerator_instance_4.runnableModels_Driver') */
      0U
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'runnableModels_Driver_RAM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF COMPONENT VARIABLE 'runnableModels_Driver'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'runnableModels_Driver'
 * data set:.....................................'RUNNABLEMODELS_DRIVER_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
const struct runnableModels_Driver_Automatic runnableModels_Driver = {
   /* substruct: runnableModels_Driver.RandomGenerator_instance (modeled as:'RandomGenerator_instance.runnableModels_Driver') */
   {
      /* type descriptor pointer 'components_RandomGenerator_Automatic_CAL_MEM' for memory class substruct for 'CAL_MEM' */
      &runnableModels_Driver_CAL_MEM.RandomGenerator_instance,
      /* type descriptor pointer 'components_RandomGenerator_Automatic_RAM' for memory class substruct for 'RAM' */
      &runnableModels_Driver_RAM.RandomGenerator_instance
   },
   /* substruct: runnableModels_Driver.RandomGenerator_instance_2 (modeled as:'RandomGenerator_instance_2.runnableModels_Driver') */
   {
      /* type descriptor pointer 'components_RandomGenerator_Automatic_CAL_MEM' for memory class substruct for 'CAL_MEM' */
      &runnableModels_Driver_CAL_MEM.RandomGenerator_instance_2,
      /* type descriptor pointer 'components_RandomGenerator_Automatic_RAM' for memory class substruct for 'RAM' */
      &runnableModels_Driver_RAM.RandomGenerator_instance_2
   },
   /* substruct: runnableModels_Driver.RandomGenerator_instance_3 (modeled as:'RandomGenerator_instance_3.runnableModels_Driver') */
   {
      /* type descriptor pointer 'components_RandomGenerator_Automatic_CAL_MEM' for memory class substruct for 'CAL_MEM' */
      &runnableModels_Driver_CAL_MEM.RandomGenerator_instance_3,
      /* type descriptor pointer 'components_RandomGenerator_Automatic_RAM' for memory class substruct for 'RAM' */
      &runnableModels_Driver_RAM.RandomGenerator_instance_3
   },
   /* substruct: runnableModels_Driver.RandomGenerator_instance_4 (modeled as:'RandomGenerator_instance_4.runnableModels_Driver') */
   {
      /* type descriptor pointer 'components_RandomGenerator_Automatic_CAL_MEM' for memory class substruct for 'CAL_MEM' */
      &runnableModels_Driver_CAL_MEM.RandomGenerator_instance_4,
      /* type descriptor pointer 'components_RandomGenerator_Automatic_RAM' for memory class substruct for 'RAM' */
      &runnableModels_Driver_RAM.RandomGenerator_instance_4
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF COMPONENT VARIABLE 'runnableModels_Driver'
 ******************************************************************************/





#define base_noiselevel_VAL (runnableModels_Driver_CAL_MEM.base_noiselevel)
#define base_v_VAL (runnableModels_Driver_CAL_MEM.base_v)
#define deflate_fl_VAL (runnableModels_Driver_CAL_MEM.deflate_fl)
#define deflate_fr_VAL (runnableModels_Driver_CAL_MEM.deflate_fr)
#define deflate_vrl_VAL (runnableModels_Driver_CAL_MEM.deflate_vrl)
#define deflate_vrr_VAL (runnableModels_Driver_CAL_MEM.deflate_vrr)
#define error_FL_VAL (runnableModels_Driver_CAL_MEM.error_FL)
#define error_FR_VAL (runnableModels_Driver_CAL_MEM.error_FR)
#define error_RL_VAL (runnableModels_Driver_CAL_MEM.error_RL)
#define error_RR_VAL (runnableModels_Driver_CAL_MEM.error_RR)
#define RandomGenerator_instance_2_REF (&(runnableModels_Driver.RandomGenerator_instance_2))
#define RandomGenerator_instance_3_REF (&(runnableModels_Driver.RandomGenerator_instance_3))
#define RandomGenerator_instance_4_REF (&(runnableModels_Driver.RandomGenerator_instance_4))
#define RandomGenerator_instance_REF (&(runnableModels_Driver.RandomGenerator_instance))


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF PROCESS 'runnableModels_Driver_Automatic_calc'
 * ----------------------------------------------------------------------------
 * model name:...................................'calc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/
/* messages used by this process */


void runnableModels_Driver_Automatic_calc (void)
{
   /* define local message copies */
   float32 interfaces_interfaces_vfl__runnableModels_Driver_Automatic_calc;
   float32 interfaces_interfaces_vfr__runnableModels_Driver_Automatic_calc;
   float32 interfaces_interfaces_vrl__runnableModels_Driver_Automatic_calc;
   float32 interfaces_interfaces_vrr__runnableModels_Driver_Automatic_calc;
   /* receive messages implicitly */
   {
      DisableAllInterrupts();
      interfaces_interfaces_vfl__runnableModels_Driver_Automatic_calc = interfaces_interfaces_vfl;
      interfaces_interfaces_vfr__runnableModels_Driver_Automatic_calc = interfaces_interfaces_vfr;
      interfaces_interfaces_vrl__runnableModels_Driver_Automatic_calc = interfaces_interfaces_vrl;
      interfaces_interfaces_vrr__runnableModels_Driver_Automatic_calc = interfaces_interfaces_vrr;
      EnableAllInterrupts();
   }
   interfaces_interfaces_vfr__runnableModels_Driver_Automatic_calc
      = components_ErrorModule_Automatic_calc(deflate_fr_VAL, components_RandomGenerator_Automatic_calc(RandomGenerator_instance_REF, base_v_VAL, base_noiselevel_VAL, 123), error_FR_VAL);
   interfaces_interfaces_vfl__runnableModels_Driver_Automatic_calc
      = components_ErrorModule_Automatic_calc(deflate_fl_VAL, components_RandomGenerator_Automatic_calc(RandomGenerator_instance_2_REF, base_v_VAL, base_noiselevel_VAL, 456), error_FL_VAL);
   interfaces_interfaces_vrl__runnableModels_Driver_Automatic_calc
      = components_ErrorModule_Automatic_calc(deflate_vrl_VAL, components_RandomGenerator_Automatic_calc(RandomGenerator_instance_3_REF, base_v_VAL, base_noiselevel_VAL, 789), error_RL_VAL);
   interfaces_interfaces_vrr__runnableModels_Driver_Automatic_calc
      = components_ErrorModule_Automatic_calc(deflate_vrr_VAL, components_RandomGenerator_Automatic_calc(RandomGenerator_instance_4_REF, base_v_VAL, base_noiselevel_VAL, 901), error_RR_VAL);
   /* send messages implicitly */
   {
      DisableAllInterrupts();
      interfaces_interfaces_vfl = interfaces_interfaces_vfl__runnableModels_Driver_Automatic_calc;
      interfaces_interfaces_vfr = interfaces_interfaces_vfr__runnableModels_Driver_Automatic_calc;
      interfaces_interfaces_vrl = interfaces_interfaces_vrl__runnableModels_Driver_Automatic_calc;
      interfaces_interfaces_vrr = interfaces_interfaces_vrr__runnableModels_Driver_Automatic_calc;
      EnableAllInterrupts();
   }
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF PROCESS 'runnableModels_Driver_Automatic_calc'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



