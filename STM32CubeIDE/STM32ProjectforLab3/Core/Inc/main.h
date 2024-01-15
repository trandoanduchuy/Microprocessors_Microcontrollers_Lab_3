/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BUTTON_1_Pin GPIO_PIN_13
#define BUTTON_1_GPIO_Port GPIOC
#define BUTTON_2_Pin GPIO_PIN_14
#define BUTTON_2_GPIO_Port GPIOC
#define BUTTON_3_Pin GPIO_PIN_15
#define BUTTON_3_GPIO_Port GPIOC
#define EN_0_Pin GPIO_PIN_1
#define EN_0_GPIO_Port GPIOA
#define EN_1_Pin GPIO_PIN_2
#define EN_1_GPIO_Port GPIOA
#define EN_2_Pin GPIO_PIN_3
#define EN_2_GPIO_Port GPIOA
#define EN_3_Pin GPIO_PIN_4
#define EN_3_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_RED_1_Pin GPIO_PIN_6
#define LED_RED_1_GPIO_Port GPIOA
#define LED_YELLOW_1_Pin GPIO_PIN_7
#define LED_YELLOW_1_GPIO_Port GPIOA
#define SEG_0_1_Pin GPIO_PIN_0
#define SEG_0_1_GPIO_Port GPIOB
#define SEG_1_1_Pin GPIO_PIN_1
#define SEG_1_1_GPIO_Port GPIOB
#define SEG_2_1_Pin GPIO_PIN_2
#define SEG_2_1_GPIO_Port GPIOB
#define SEG_3_2_Pin GPIO_PIN_10
#define SEG_3_2_GPIO_Port GPIOB
#define SEG_4_2_Pin GPIO_PIN_11
#define SEG_4_2_GPIO_Port GPIOB
#define SEG_5_2_Pin GPIO_PIN_12
#define SEG_5_2_GPIO_Port GPIOB
#define SEG_6_2_Pin GPIO_PIN_13
#define SEG_6_2_GPIO_Port GPIOB
#define LED_GREEN_1_Pin GPIO_PIN_8
#define LED_GREEN_1_GPIO_Port GPIOA
#define LED_RED_2_Pin GPIO_PIN_9
#define LED_RED_2_GPIO_Port GPIOA
#define LED_YELLOW_2_Pin GPIO_PIN_10
#define LED_YELLOW_2_GPIO_Port GPIOA
#define LED_GREEN_2_Pin GPIO_PIN_11
#define LED_GREEN_2_GPIO_Port GPIOA
#define SEG_3_1_Pin GPIO_PIN_3
#define SEG_3_1_GPIO_Port GPIOB
#define SEG_4_1_Pin GPIO_PIN_4
#define SEG_4_1_GPIO_Port GPIOB
#define SEG_5_1_Pin GPIO_PIN_5
#define SEG_5_1_GPIO_Port GPIOB
#define SEG_6_1_Pin GPIO_PIN_6
#define SEG_6_1_GPIO_Port GPIOB
#define SEG_0_2_Pin GPIO_PIN_7
#define SEG_0_2_GPIO_Port GPIOB
#define SEG_1_2_Pin GPIO_PIN_8
#define SEG_1_2_GPIO_Port GPIOB
#define SEG_2_2_Pin GPIO_PIN_9
#define SEG_2_2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
