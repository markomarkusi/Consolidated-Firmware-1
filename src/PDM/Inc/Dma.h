#ifndef DMA_H
#define DMA_H

#include "stm32f3xx_hal.h"
#include "CurrentSense.h"
#include "FaultHandling.h"

extern volatile GPIO_PinState DSEL_State;
extern ADC_HandleTypeDef hadc1;
extern DMA_HandleTypeDef hdma_adc1;
extern volatile uint32_t adc_readings[];
extern volatile float converted_readings[];
extern volatile uint8_t e_fuse_fault_states[ADC_CHANNEL_COUNT * NUM_READINGS];


// Function Declarations
/**
 * 	@brief Initialize DMA 
 *	@param None
 *	@return None
**/
void DMA_Init(void);
void DMA_TransferCompleteCallback(DMA_HandleTypeDef* _hdma);

#endif