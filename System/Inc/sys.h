#ifndef _SYS_H
#define _SYS_H
#include "stm32f1xx_hal.h"


/**
 * SYS_SUPPORT_OS用于定义系统文件夹是否支持OS
 * 0,不支持OS
 * 1,支持OS
 */
#define SYS_SUPPORT_OS         0


/*函数声明*******************************************************************************************/

// void sys_nvic_set_vector_table(uint32_t baseaddr, uint32_t offset);                         /* 设置中断偏移量 */
// void sys_standby(void);                                                                     /* 进入待机模式 */
// void sys_soft_reset(void);                                                                  /* 系统软复位 */
void sys_stm32_clock_init(void);   /* 配置系统时钟 */


/* 以下为汇编函数 */
// void sys_wfi_set(void);             /* 执行WFI指令 */
// void sys_intx_disable(void);        /* 关闭所有中断 */
// void sys_intx_enable(void);         /* 开启所有中断 */
// void sys_msr_msp(uint32_t addr);    /* 设置栈顶地址 */
void Error_Handler(void);
#endif