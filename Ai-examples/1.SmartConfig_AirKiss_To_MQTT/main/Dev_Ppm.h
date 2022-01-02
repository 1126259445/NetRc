#ifndef __DEV_PPM_H__
#define __DEV_PPM_H__

#include <stdio.h>
#include "esp_system.h"

// 宏定义
//=============================================================================

typedef struct 
{
    uint16_t RC_ch[10];
    uint32_t recv_time;
    uint8_t ppm_lost;
}Rc_t;
extern Rc_t Rc;
//=============================================================================

// 函数声明
//=============================================================================
void PPM_Init(void);

#endif
