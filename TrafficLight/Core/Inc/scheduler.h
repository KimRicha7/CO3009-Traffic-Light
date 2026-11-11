#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>

#define SCH_MAX_TASKS 10
#define NO_TASK_ID    0

typedef struct {
    void     (*pTask)(void);
    uint32_t Delay;
    uint32_t Period;
    uint8_t  RunMe;
    uint32_t TaskID;
} sTask;

void     SCH_Init(void);
uint32_t SCH_Add_Task(void (*f)(void), uint32_t delay, uint32_t period);
uint8_t  SCH_Delete_Task(uint32_t id);
void     SCH_Update(void);
void     SCH_Dispatch_Tasks(void);

#endif /* INC_SCHEDULER_H_ */
