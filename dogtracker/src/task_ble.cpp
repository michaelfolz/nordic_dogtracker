#include "task_ble.h"


#include "nrf_pwr_mgmt.h"


#define TASK_DELAY        2    

/**
 * ble task responsible for handelling all ble communications in/out 
 * @param pvParameter 
 */
void ble_task_function(void * pvParameter)
{
    UNUSED_PARAMETER(pvParameter);
    uint32_t i =0; 

    i = ble_init();
  
    while (true)
    {
        /* Delay a task for a given number of ticks */
        vTaskDelay(TASK_DELAY);

//        nrf_pwr_mgmt_run();
        /* Tasks must be implemented to never return... */
    }

    // Task should never end! 
    return; 
}