/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32g0xx_hal.h"

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
#define BUZZER_Pin GPIO_PIN_13
#define BUZZER_GPIO_Port GPIOC
#define OSC_IN_Pin GPIO_PIN_0
#define OSC_IN_GPIO_Port GPIOF
#define OSC_OUT_Pin GPIO_PIN_1
#define OSC_OUT_GPIO_Port GPIOF
#define DAC__LDAC_Pin GPIO_PIN_2
#define DAC__LDAC_GPIO_Port GPIOA
#define BNC_A_Pin GPIO_PIN_5
#define BNC_A_GPIO_Port GPIOA
#define BNC_B_Pin GPIO_PIN_6
#define BNC_B_GPIO_Port GPIOA
#define VLOAD_A_Pin GPIO_PIN_0
#define VLOAD_A_GPIO_Port GPIOB
#define DUT_A_Pin GPIO_PIN_1
#define DUT_A_GPIO_Port GPIOB
#define VLOAD_B_Pin GPIO_PIN_10
#define VLOAD_B_GPIO_Port GPIOB
#define DUT_B_Pin GPIO_PIN_11
#define DUT_B_GPIO_Port GPIOB
#define SCL_Pin GPIO_PIN_13
#define SCL_GPIO_Port GPIOB
#define SDA_Pin GPIO_PIN_14
#define SDA_GPIO_Port GPIOB
#define LCD_RST_Pin GPIO_PIN_15
#define LCD_RST_GPIO_Port GPIOB
#define LCD__CS1_Pin GPIO_PIN_8
#define LCD__CS1_GPIO_Port GPIOA
#define LCD_A0_Pin GPIO_PIN_9
#define LCD_A0_GPIO_Port GPIOA
#define ENC_B_Pin GPIO_PIN_6
#define ENC_B_GPIO_Port GPIOC
#define ENC_B_EXTI_IRQn EXTI4_15_IRQn
#define ENC_A_Pin GPIO_PIN_7
#define ENC_A_GPIO_Port GPIOC
#define ENC_A_EXTI_IRQn EXTI4_15_IRQn
#define ENC_SW_Pin GPIO_PIN_11
#define ENC_SW_GPIO_Port GPIOA
#define ENC_SW_EXTI_IRQn EXTI4_15_IRQn
#define LDO_EN_Pin GPIO_PIN_12
#define LDO_EN_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define PWM_BACKLIGHT_Pin GPIO_PIN_15
#define PWM_BACKLIGHT_GPIO_Port GPIOA
#define SW_D_Pin GPIO_PIN_0
#define SW_D_GPIO_Port GPIOD
#define SW_D_EXTI_IRQn EXTI0_1_IRQn
#define SW_U_Pin GPIO_PIN_1
#define SW_U_GPIO_Port GPIOD
#define SW_U_EXTI_IRQn EXTI0_1_IRQn
#define SW_L_Pin GPIO_PIN_2
#define SW_L_GPIO_Port GPIOD
#define SW_L_EXTI_IRQn EXTI2_3_IRQn
#define SW_R_Pin GPIO_PIN_3
#define SW_R_GPIO_Port GPIOD
#define SW_R_EXTI_IRQn EXTI2_3_IRQn
#define LCD_SCL_Pin GPIO_PIN_3
#define LCD_SCL_GPIO_Port GPIOB
#define LCD_SI_Pin GPIO_PIN_5
#define LCD_SI_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
