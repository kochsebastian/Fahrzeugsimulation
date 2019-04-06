/* This is an automatically generated file */
/* DO NOT EDIT THIS FILE */
/* File generated for project "conf" */
/* Last edited 'unknown' */
/* File generated 'Fri Mar 22 09:25:53 2019' */
/* Target variant 'MinGW' */

/* The file must be included for general-purpose code, not tasks and ISRs */

#ifndef OS_OSEK_H
#define OS_OSEK_H

#include "osekcomn.h"
#include "osgen.h"

#ifdef OS_EXTENDED_BUILD
#define OSEK_NUM_TASKS (4U)
#define OSEK_NUM_RESOURCES (1U)
#define OSEK_NUM_ALARMS (1U)
#define OSEK_NUM_ACCESSORS (0U)
#endif /* OS_EXTENDED_BUILD */
#define OSEK_NUM_MESSAGES (0U)
#define OSEK_NUM_FLAGS (0U)
#define OSEK_NUM_PERIODICSCHEDULES (0U)
#define OSEK_NUM_PLANNEDSCHEDULES (0U)
#define OSEK_NUM_SCHEDULETABLES (0U)

#define osek_idle_task_default_profile (0)	/* Profile */
#define etasConfigTask_default_profile (0)	/* Profile */
#define etasL1Task_default_profile (0)	/* Profile */
#define Task0_default_profile (0)	/* Profile */
#define etasTimerIsr_default_profile (0)	/* Profile */
#define etasL1Isr_default_profile (0)	/* Profile */
#define etasStopOsIsr_default_profile (0)	/* Profile */
#define OSALARM_alarm_Task0 (0)	/* Alarm */
#define alarm_Task0_response1 (0)	/* Critical execution */

DeclareResource(RES_SCHEDULER);
#define GetResource_RES_SCHEDULER() GetResource(RES_SCHEDULER)
#define ReleaseResource_RES_SCHEDULER() ReleaseResource(RES_SCHEDULER)
#define ActivateTask_etasConfigTask() ActivateTask(etasConfigTask)
#define ChainTask_etasConfigTask() ChainTask(etasConfigTask)
#define ActivateTask_etasL1Task() ActivateTask(etasL1Task)
#define ChainTask_etasL1Task() ChainTask(etasL1Task)
#define ActivateTask_Task0() ActivateTask(Task0)
#define ChainTask_Task0() ChainTask(Task0)
extern OS_API_NONREENTRANT(void) osResetOS(void);
#endif /* OS_OSEK_H */

/* End of osek.h */