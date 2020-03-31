/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under Ultimate Liberty license
 * SLA0044, the "License"; You may not use this file except in compliance with
 * the License. You may obtain a copy of the License at:
 *                             www.st.com/SLA0044
 *
 ******************************************************************************
 */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C"
{
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "Io_SharedErrorHandlerOverride.h"
    /* USER CODE END Includes */

    /* Exported types
     * ------------------------------------------------------------*/
    /* USER CODE BEGIN ET */

    /* USER CODE END ET */

    /* Exported constants
     * --------------------------------------------------------*/
    /* USER CODE BEGIN EC */

    /* USER CODE END EC */

    /* Exported macro
     * ------------------------------------------------------------*/
    /* USER CODE BEGIN EM */

    /* USER CODE END EM */

    /* Exported functions prototypes
     * ---------------------------------------------*/
    void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define IWDG_WINDOW_DISABLE_VALUE 4095
#define IWDG_PRESCALER 4
#define IWDG_RESET_FREQUENCY 5
#define LSI_FREQUENCY 40000
#define TASK1HZ_STACK_SIZE 128
#define TASK1KHZ_STACK_SIZE 128
#define TASKCANRX_STACK_SIZE 128
#define TASKCANTX_STACK_SIZE 128
#define TIM2_FREQUENCY 72000000
#define TIM2_AUTO_RELOAD_REG 0xFFFF
#define TIM2_PWM_MINIMUM_FREQUENCY 1
#define TIM2_PRESCALER \
    (TIM2_FREQUENCY / TIM2_AUTO_RELOAD_REG / TIM2_PWM_MINIMUM_FREQUENCY)
#define TIMx_AUTO_RELOAD_REG 0xFFFF
#define TIMx_FREQUENCY 72000000
#define TIMx_PRESCALER (TIMx_FREQUENCY / TIMx_AUTO_RELOAD_REG)
#define UNUSED_GPIO_2_Pin GPIO_PIN_1
#define UNUSED_GPIO_2_GPIO_Port GPIOB
#define UNUSED_GPIO_3_Pin GPIO_PIN_2
#define UNUSED_GPIO_3_GPIO_Port GPIOB
#define UNUSED_GPIO_4_Pin GPIO_PIN_10
#define UNUSED_GPIO_4_GPIO_Port GPIOB
#define UNUSED_GPIO_5_Pin GPIO_PIN_11
#define UNUSED_GPIO_5_GPIO_Port GPIOB
#define UNUSED_GPIO_6_Pin GPIO_PIN_12
#define UNUSED_GPIO_6_GPIO_Port GPIOB
#define UNUSED_GPIO_7_Pin GPIO_PIN_14
#define UNUSED_GPIO_7_GPIO_Port GPIOB
#define BPSD_BRAKE_THRES_Pin GPIO_PIN_15
#define BPSD_BRAKE_THRES_GPIO_Port GPIOA
#define STATUS_R_Pin GPIO_PIN_5
#define STATUS_R_GPIO_Port GPIOB
#define COOLANT_FLOW_1_Pin GPIO_PIN_6
#define COOLANT_FLOW_1_GPIO_Port GPIOB
#define COOLANT_FLOW_2_Pin GPIO_PIN_7
#define COOLANT_FLOW_2_GPIO_Port GPIOB
#define STATUS_G_Pin GPIO_PIN_8
#define STATUS_G_GPIO_Port GPIOB
#define STATUS_B_Pin GPIO_PIN_9
#define STATUS_B_GPIO_Port GPIOB
    /* USER CODE BEGIN Private defines */

    /* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
