#include "task_control.h"


#define TASK_DELAY        2000     

/**
 * main control task, responsible for controlling all IO
 * @param pvParameter 
 */
void control_task_function(void * pvParameter)
{
    UNUSED_PARAMETER(pvParameter);
    uint32_t i =0; 

    while (true)
    {
        /* Delay a task for a given number of ticks */
        vTaskDelay(TASK_DELAY);

        /* Tasks must be implemented to never return... */
    }

    // Task should never end! 
    return; 
}