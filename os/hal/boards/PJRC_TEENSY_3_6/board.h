/*
    ChibiOS - Copyright (C) 2015 RedoX https://github.com/RedoXyde

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _BOARD_H_
#define _BOARD_H_

/*
 * Setup for the PJRC Teensy 3.6 board.
 */

/*
 * Board identifier.
 */
#define BOARD_PJRC_TEENSY_3_6
#define BOARD_NAME                  "PJRC Teensy 3.6"

/* External 16 MHz crystal */
#define KINETIS_XTAL_FREQUENCY      16000000UL

/* Use internal capacitors for the crystal */
#define KINETIS_BOARD_OSCILLATOR_SETTING OSC0_CR_SC8P_SET(1) | OSC0_CR_SC2P_SET(1) | OSC0_CR_ERCLKEN_SET(1)

/*
 * MCU type
 */
#define MK66F18

/*
 * IO pins assignments.
 */
#define PORTA_PIN0                  0
#define PORTA_PIN1                  1
#define PORTA_PIN2                  2
#define PORTA_PIN3                  3
#define PORTA_PIN4                  4
#define TEENSY_PIN25                5
#define PORTA_PIN6                  6
#define PORTA_PIN7                  7
#define PORTA_PIN8                  8
#define PORTA_PIN9                  9
#define PORTA_PIN10                 10
#define PORTA_PIN11                 11
#define TEENSY_PIN3                 12
#define TEENSY_PIN4                 13
#define TEENSY_PIN26                14
#define TEENSY_PIN27                15
#define TEENSY_PIN28                16
#define TEENSY_PIN39                17
#define PORTA_PIN18                 18
#define PORTA_PIN19                 19
#define PORTA_PIN20                 20
#define PORTA_PIN21                 21
#define PORTA_PIN22                 22
#define PORTA_PIN23                 23
#define PORTA_PIN24                 24
#define PORTA_PIN25                 25
#define TEENSY_PIN42                26
#define PORTA_PIN27                 27
#define TEENSY_PIN40                28
#define TEENSY_PIN41                29
#define PORTA_PIN30                 30
#define PORTA_PIN31                 31

#define TEENSY_PIN40_IOPORT  IOPORT1
#define TEENSY_PIN41_IOPORT  IOPORT1
#define TEENSY_PIN42_IOPORT  IOPORT1
#define TEENSY_PIN3_IOPORT   IOPORT1
#define TEENSY_PIN4_IOPORT   IOPORT1
#define TEENSY_PIN25_IOPORT  IOPORT1
#define TEENSY_PIN26_IOPORT  IOPORT1
#define TEENSY_PIN27_IOPORT  IOPORT1
#define TEENSY_PIN28_IOPORT  IOPORT1
#define TEENSY_PIN39_IOPORT  IOPORT1

#define TEENSY_PIN16                0
#define TEENSY_PIN17                1
#define TEENSY_PIN19                2
#define TEENSY_PIN18                3
#define TEENSY_PIN49                4
#define TEENSY_PIN50                5
#define PORTB_PIN6                  6
#define PORTB_PIN7                  7
#define PORTB_PIN8                  8
#define PORTB_PIN9                  9
#define TEENSY_PIN31                10
#define TEENSY_PIN32                11
#define PORTB_PIN12                 12
#define PORTB_PIN13                 13
#define PORTB_PIN14                 14
#define PORTB_PIN15                 15
#define TEENSY_PIN0                 16
#define TEENSY_PIN1                 17
#define TEENSY_PIN29                18
#define TEENSY_PIN30                19
#define TEENSY_PIN43                20
#define TEENSY_PIN46                21
#define TEENSY_PIN44                22
#define TEENSY_PIN45                23
#define PORTB_PIN24                 24
#define PORTB_PIN25                 25
#define PORTB_PIN26                 26
#define PORTB_PIN27                 27
#define PORTB_PIN28                 28
#define PORTB_PIN29                 29
#define PORTB_PIN30                 30
#define PORTB_PIN31                 31

#define TEENSY_PIN49_IOPORT  IOPORT2
#define TEENSY_PIN50_IOPORT  IOPORT2
#define TEENSY_PIN43_IOPORT  IOPORT2
#define TEENSY_PIN44_IOPORT  IOPORT2
#define TEENSY_PIN45_IOPORT  IOPORT2
#define TEENSY_PIN46_IOPORT  IOPORT2
#define TEENSY_PIN0_IOPORT   IOPORT2
#define TEENSY_PIN1_IOPORT   IOPORT2
#define TEENSY_PIN29_IOPORT  IOPORT2
#define TEENSY_PIN30_IOPORT  IOPORT2
#define TEENSY_PIN31_IOPORT  IOPORT2
#define TEENSY_PIN32_IOPORT  IOPORT2
#define TEENSY_PIN16_IOPORT  IOPORT2
#define TEENSY_PIN17_IOPORT  IOPORT2
#define TEENSY_PIN19_IOPORT  IOPORT2
#define TEENSY_PIN18_IOPORT  IOPORT2

#define TEENSY_PIN15                0
#define TEENSY_PIN22                1
#define TEENSY_PIN23                2
#define TEENSY_PIN9                 3
#define TEENSY_PIN10                4
#define TEENSY_PIN13                5
#define TEENSY_PIN11                6
#define TEENSY_PIN12                7
#define TEENSY_PIN35                8
#define TEENSY_PIN36                9
#define TEENSY_PIN37                10
#define TEENSY_PIN38                11
#define PORTC_PIN12                 12
#define PORTC_PIN13                 13
#define PORTC_PIN14                 14
#define PORTC_PIN15                 15
#define PORTC_PIN16                 16
#define PORTC_PIN17                 17
#define PORTC_PIN18                 18
#define PORTC_PIN19                 19
#define PORTC_PIN20                 20
#define PORTC_PIN21                 21
#define PORTC_PIN22                 22
#define PORTC_PIN23                 23
#define PORTC_PIN24                 24
#define PORTC_PIN25                 25
#define PORTC_PIN26                 26
#define PORTC_PIN27                 27
#define PORTC_PIN28                 28
#define PORTC_PIN29                 29
#define PORTC_PIN30                 30
#define PORTC_PIN31                 31

#define TEENSY_PIN9_IOPORT   IOPORT3
#define TEENSY_PIN10_IOPORT  IOPORT3
#define TEENSY_PIN11_IOPORT  IOPORT3
#define TEENSY_PIN12_IOPORT  IOPORT3
#define TEENSY_PIN35_IOPORT  IOPORT3
#define TEENSY_PIN36_IOPORT  IOPORT3
#define TEENSY_PIN37_IOPORT  IOPORT3
#define TEENSY_PIN38_IOPORT  IOPORT3
#define TEENSY_PIN13_IOPORT  IOPORT3
#define TEENSY_PIN15_IOPORT  IOPORT3
#define TEENSY_PIN22_IOPORT  IOPORT3
#define TEENSY_PIN23_IOPORT  IOPORT3

#define TEENSY_PIN2                 0
#define TEENSY_PIN14                1
#define TEENSY_PIN7                 2
#define TEENSY_PIN8                 3
#define TEENSY_PIN6                 4
#define TEENSY_PIN20                5
#define TEENSY_PIN21                6
#define TEENSY_PIN5                 7
#define TEENSY_PIN47                8
#define TEENSY_PIN48                9
#define PORTD_PIN10                 10
#define TEENSY_PIN55                11
#define TEENSY_PIN53                12
#define TEENSY_PIN52                13
#define TEENSY_PIN51                14
#define TEENSY_PIN54                15
#define PORTD_PIN16                 16
#define PORTD_PIN17                 17
#define PORTD_PIN18                 18
#define PORTD_PIN19                 19
#define PORTD_PIN20                 20
#define PORTD_PIN21                 21
#define PORTD_PIN22                 22
#define PORTD_PIN23                 23
#define PORTD_PIN24                 24
#define PORTD_PIN25                 25
#define PORTD_PIN26                 26
#define PORTD_PIN27                 27
#define PORTD_PIN28                 28
#define PORTD_PIN29                 29
#define PORTD_PIN30                 30
#define PORTD_PIN31                 31

#define TEENSY_PIN51_IOPORT  IOPORT4
#define TEENSY_PIN52_IOPORT  IOPORT4
#define TEENSY_PIN53_IOPORT  IOPORT4
#define TEENSY_PIN54_IOPORT  IOPORT4
#define TEENSY_PIN55_IOPORT  IOPORT4
#define TEENSY_PIN47_IOPORT  IOPORT4
#define TEENSY_PIN48_IOPORT  IOPORT4
#define TEENSY_PIN2_IOPORT   IOPORT4
#define TEENSY_PIN5_IOPORT   IOPORT4
#define TEENSY_PIN6_IOPORT   IOPORT4
#define TEENSY_PIN7_IOPORT   IOPORT4
#define TEENSY_PIN8_IOPORT   IOPORT4
#define TEENSY_PIN14_IOPORT  IOPORT4
#define TEENSY_PIN20_IOPORT  IOPORT4
#define TEENSY_PIN21_IOPORT  IOPORT4

#define PORTE_PIN0                  0
#define PORTE_PIN1                  1
#define PORTE_PIN2                  2
#define PORTE_PIN3                  3
#define PORTE_PIN4                  4
#define PORTE_PIN5                  5
#define PORTE_PIN6                  6
#define PORTE_PIN7                  7
#define PORTE_PIN8                  8
#define PORTE_PIN9                  9
#define TEENSY_PIN56                10
#define TEENSY_PIN57                11
#define PORTE_PIN12                 12
#define PORTE_PIN13                 13
#define PORTE_PIN14                 14
#define PORTE_PIN15                 15
#define PORTE_PIN16                 16
#define PORTE_PIN17                 17
#define PORTE_PIN18                 18
#define PORTE_PIN19                 19
#define PORTE_PIN20                 20
#define PORTE_PIN21                 21
#define PORTE_PIN22                 22
#define PORTE_PIN23                 23
#define TEENSY_PIN33                24
#define TEENSY_PIN34                25
#define TEENSY_PIN24                26
#define PORTE_PIN27                 27
#define PORTE_PIN28                 28
#define PORTE_PIN29                 29
#define PORTE_PIN30                 30
#define PORTE_PIN31                 31

#define TEENSY_PIN56_IOPORT  IOPORT5
#define TEENSY_PIN57_IOPORT  IOPORT5
#define TEENSY_PIN24_IOPORT  IOPORT5
#define TEENSY_PIN33_IOPORT  IOPORT5
#define TEENSY_PIN34_IOPORT  IOPORT5


#define LINE_PIN0           PAL_LINE(TEENSY_PIN0_IOPORT, TEENSY_PIN0)
#define LINE_PIN1           PAL_LINE(TEENSY_PIN1_IOPORT, TEENSY_PIN1)
#define LINE_PIN2           PAL_LINE(TEENSY_PIN2_IOPORT, TEENSY_PIN2)
#define LINE_PIN3           PAL_LINE(TEENSY_PIN3_IOPORT, TEENSY_PIN3)
#define LINE_PIN4           PAL_LINE(TEENSY_PIN4_IOPORT, TEENSY_PIN4)
#define LINE_PIN5           PAL_LINE(TEENSY_PIN5_IOPORT, TEENSY_PIN5)
#define LINE_PIN6           PAL_LINE(TEENSY_PIN6_IOPORT, TEENSY_PIN6)
#define LINE_PIN7           PAL_LINE(TEENSY_PIN7_IOPORT, TEENSY_PIN7)
#define LINE_PIN8           PAL_LINE(TEENSY_PIN8_IOPORT, TEENSY_PIN8)
#define LINE_PIN9           PAL_LINE(TEENSY_PIN9_IOPORT, TEENSY_PIN9)
#define LINE_PIN10          PAL_LINE(TEENSY_PIN10_IOPORT, TEENSY_PIN10)
#define LINE_PIN11          PAL_LINE(TEENSY_PIN11_IOPORT, TEENSY_PIN11)
#define LINE_PIN12          PAL_LINE(TEENSY_PIN12_IOPORT, TEENSY_PIN12)
#define LINE_PIN13          PAL_LINE(TEENSY_PIN13_IOPORT, TEENSY_PIN13)
#define LINE_PIN14          PAL_LINE(TEENSY_PIN14_IOPORT, TEENSY_PIN14)
#define LINE_PIN15          PAL_LINE(TEENSY_PIN15_IOPORT, TEENSY_PIN15)
#define LINE_PIN16          PAL_LINE(TEENSY_PIN16_IOPORT, TEENSY_PIN16)
#define LINE_PIN17          PAL_LINE(TEENSY_PIN17_IOPORT, TEENSY_PIN17)
#define LINE_PIN18          PAL_LINE(TEENSY_PIN18_IOPORT, TEENSY_PIN18)
#define LINE_PIN19          PAL_LINE(TEENSY_PIN19_IOPORT, TEENSY_PIN19)
#define LINE_PIN20          PAL_LINE(TEENSY_PIN20_IOPORT, TEENSY_PIN20)
#define LINE_PIN21          PAL_LINE(TEENSY_PIN21_IOPORT, TEENSY_PIN21)
#define LINE_PIN22          PAL_LINE(TEENSY_PIN22_IOPORT, TEENSY_PIN22)
#define LINE_PIN23          PAL_LINE(TEENSY_PIN23_IOPORT, TEENSY_PIN23)
#define LINE_PIN24          PAL_LINE(TEENSY_PIN24_IOPORT, TEENSY_PIN24)
#define LINE_PIN25          PAL_LINE(TEENSY_PIN25_IOPORT, TEENSY_PIN25)
#define LINE_PIN25          PAL_LINE(TEENSY_PIN25_IOPORT, TEENSY_PIN25)
#define LINE_PIN26          PAL_LINE(TEENSY_PIN26_IOPORT, TEENSY_PIN26)
#define LINE_PIN27          PAL_LINE(TEENSY_PIN27_IOPORT, TEENSY_PIN27)
#define LINE_PIN28          PAL_LINE(TEENSY_PIN28_IOPORT, TEENSY_PIN28)
#define LINE_PIN29          PAL_LINE(TEENSY_PIN29_IOPORT, TEENSY_PIN29)
#define LINE_PIN30          PAL_LINE(TEENSY_PIN30_IOPORT, TEENSY_PIN30)
#define LINE_PIN31          PAL_LINE(TEENSY_PIN31_IOPORT, TEENSY_PIN31)
#define LINE_PIN32          PAL_LINE(TEENSY_PIN32_IOPORT, TEENSY_PIN32)
#define LINE_PIN33          PAL_LINE(TEENSY_PIN33_IOPORT, TEENSY_PIN33)
#define LINE_PIN34          PAL_LINE(TEENSY_PIN34_IOPORT, TEENSY_PIN34)
#define LINE_PIN35          PAL_LINE(TEENSY_PIN35_IOPORT, TEENSY_PIN35)
#define LINE_PIN36          PAL_LINE(TEENSY_PIN36_IOPORT, TEENSY_PIN36)
#define LINE_PIN37          PAL_LINE(TEENSY_PIN37_IOPORT, TEENSY_PIN37)
#define LINE_PIN38          PAL_LINE(TEENSY_PIN38_IOPORT, TEENSY_PIN38)
#define LINE_PIN39          PAL_LINE(TEENSY_PIN39_IOPORT, TEENSY_PIN39)
#define LINE_PIN40          PAL_LINE(TEENSY_PIN40_IOPORT, TEENSY_PIN40)
#define LINE_PIN41          PAL_LINE(TEENSY_PIN41_IOPORT, TEENSY_PIN41)
#define LINE_PIN42          PAL_LINE(TEENSY_PIN42_IOPORT, TEENSY_PIN42)
#define LINE_PIN43          PAL_LINE(TEENSY_PIN43_IOPORT, TEENSY_PIN43)
#define LINE_PIN44          PAL_LINE(TEENSY_PIN44_IOPORT, TEENSY_PIN44)
#define LINE_PIN45          PAL_LINE(TEENSY_PIN45_IOPORT, TEENSY_PIN45)
#define LINE_PIN46          PAL_LINE(TEENSY_PIN46_IOPORT, TEENSY_PIN46)
#define LINE_PIN47          PAL_LINE(TEENSY_PIN47_IOPORT, TEENSY_PIN47)
#define LINE_PIN48          PAL_LINE(TEENSY_PIN48_IOPORT, TEENSY_PIN48)
#define LINE_PIN49          PAL_LINE(TEENSY_PIN49_IOPORT, TEENSY_PIN49)
#define LINE_PIN50          PAL_LINE(TEENSY_PIN50_IOPORT, TEENSY_PIN50)
#define LINE_PIN51          PAL_LINE(TEENSY_PIN51_IOPORT, TEENSY_PIN50)
#define LINE_PIN52          PAL_LINE(TEENSY_PIN52_IOPORT, TEENSY_PIN52)
#define LINE_PIN53          PAL_LINE(TEENSY_PIN53_IOPORT, TEENSY_PIN53)
#define LINE_PIN54          PAL_LINE(TEENSY_PIN54_IOPORT, TEENSY_PIN54)
#define LINE_PIN55          PAL_LINE(TEENSY_PIN55_IOPORT, TEENSY_PIN55)
#define LINE_PIN56          PAL_LINE(TEENSY_PIN56_IOPORT, TEENSY_PIN56)
#define LINE_PIN57          PAL_LINE(TEENSY_PIN57_IOPORT, TEENSY_PIN57)

#define LINE_LED            LINE_PIN13

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
