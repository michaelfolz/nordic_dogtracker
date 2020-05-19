#ifndef _TASK_IMU_H_INCLUDED
#define _TASK_IMU_H_INCLUDED

// Nordic & External Libraries Includes 
#include "FreeRTOS.h"
#include "task.h"
#include "timers.h"
#include "bsp.h"
#include "nordic_common.h"
#include "nrf_drv_clock.h"
#include "sdk_errors.h"
#include "app_error.h"

/**
 * imu function, responsible for setting up the imu device, collecting data and sending it out to the control task 
 * @param pvParameter 
 */
void imu_task_function(void * pvParameter);

#endif /* _TASK_IMU_H_*/
