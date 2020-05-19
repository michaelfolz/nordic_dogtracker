#include "task_ble.h"

#define TASK_DELAY        2000     

/**
 * ble task responsible for handelling all ble communications in/out 
 * @param pvParameter 
 */
void ble_task_function(void * pvParameter)
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