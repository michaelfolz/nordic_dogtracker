#include "freeRTOS_tasks.h"

/**< Reference to LED0 toggling FreeRTOS task. */
TaskHandle_t  led_toggle_task_handle;   

/**
 *  basic process to cycle start all desired freeRTOS tasks
 * @return  error state
 */
int32_t freeRTOS_StartTasks(void)
{
    int32_t error = NRF_SUCCESS; 

    /* Create task for LED0 blinking with priority set to 2 */
    UNUSED_VARIABLE(xTaskCreate(led_toggle_task_function, "LED0", configMINIMAL_STACK_SIZE + 200, NULL, 2, &led_toggle_task_handle));

    return error; 
}