/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

typedef enum motorsNumbers_t {
    MOTOR1 = 0,
    MOTOR2 = 1,
    MOTOR3 = 2,
    MOTOR4 = 3,
    MOTORS_NUMBER
}motorsNumbers_t;

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

void Error_Handler(void);


#define FMU_CH4_Pin         GPIO_PIN_9
#define FMU_CH4_GPIO_Port   GPIOE
#define FMU_CH3_Pin         GPIO_PIN_11
#define FMU_CH3_GPIO_Port   GPIOE
#define FMU_CH2_Pin         GPIO_PIN_13
#define FMU_CH2_GPIO_Port   GPIOE
#define FMU_CH1_Pin         GPIO_PIN_14
#define FMU_CH1_GPIO_Port   GPIOE

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
