#ifndef __SN32F2XX_CT16B1_H
#define __SN32F2XX_CT16B1_H


/*_____ I N C L U D E S ____________________________________________________*/
#include <stdint.h>
#include <SN32F200_Def.h>


/*_____ D E F I N I T I O N S ______________________________________________*/
#define	CT16B1_IRQ	INTERRUPT_METHOD		//INTERRUPT_METHOD:	Enable CT16B1 timer and interrupt
											//POLLING_METHOD: 	Enable CT16B1 timer ONLY

/*_____ D E C L A R A T I O N S ____________________________________________*/
extern volatile uint32_t iwCT16B1_IrqEvent; //The bitmask usage of iwCT16Bn_IrqEvent is the same with CT16Bn_RIS

extern	void CT16B1_Init(void);
extern	void CT16B1_ResetTimer(void);
extern 	void CT16B1_NvicEnable(void);
extern 	void CT16B1_NvicDisable(void);
extern  void CT16B1_IRQHandler(void);
#endif	/*__SN32F2XX_CT16B1_H*/
