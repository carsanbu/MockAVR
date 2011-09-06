#ifndef MOCK_AVR_IO_H
#define MOCK_AVR_IO_H

#include <avr/sfr_defs.h>
#include <stdint.h>

#define DDRB (virtualDDRB)
extern volatile uint8_t virtualDDRB;

#define PORTB (virtualPORTB)
extern volatile uint8_t virtualPORTB;

#define PINB (virtualPINB)
extern volatile uint8_t virtualPINB;

#define USIBR (virtualUSIBR)
extern volatile uint8_t virtualUSIBR;

#define USICR (virtualUSICR)
extern volatile uint8_t virtualUSICR;

#define USIDR (virtualUSIDR)
extern volatile uint8_t virtualUSIDR;

#define USISR (virtualUSISR)
extern volatile uint8_t virtualUSISR;

#define GIFR (virtualGIFR)
extern volatile uint8_t virtualGIFR;

#define GIMSK (virtualGIMSK)
extern volatile uint8_t virtualGIMSK;

#define PCMSK (virtualPCMSK)
extern volatile uint8_t virtualPCMSK;

#define GTCCR (virtualGTCCR)
extern volatile uint8_t virtualGTCCR;

#define TCCR0A (virtualTCCR0A)
extern volatile uint8_t virtualTCCR0A;

#define TCCR0B (virtualTCCR0B)
extern volatile uint8_t virtualTCCR0B;

#define OCR0A (virtualOCR0A)
extern volatile uint8_t virtualOCR0A;

#define TIMSK (virtualTIMSK)
extern volatile uint8_t virtualTIMSK;

#define TIFR (virtualTIFR)
extern volatile uint8_t virtualTIFR;

#define TCNT0 (virtualTCNT0)
extern volatile uint8_t virtualTCNT0;

#define TCCR1 (virtualTCCR1)
extern volatile uint8_t virtualTCCR1;

#define OCR1A (virtualOCR1A)
extern volatile uint8_t virtualOCR1A;

#define OCR1B (virtualOCR1B)
extern volatile uint8_t virtualOCR1B;

#define OCR1C (virtualOCR1C)
extern volatile uint8_t virtualOCR1C;

#define TCNT1 (virtualTCNT1)
extern volatile uint8_t virtualTCNT1;

// GTCCR
#define PSR0 0
#define PSR1 1





#define TSM  7

// TCCR0A
#define WGM00 0
#define WGM01 1

// TCCR0B
#define CS00  0
#define CS01  1
#define CS02  2
#define WGM02 3

// TCCR1
#define CTC1 7



#define CS13 3
#define CS12 2
#define CS11 1
#define CS10 0

// TIMSK
#define OCIE0A 4
#define OCIE1B 5
#define OCIE1A 6

// TIFR
#define OCF0A 4

// PORTB
#define PB0 0
#define PB1 1
#define PB2 2
#define PB3 3
#define PB4 4

// GIFR
#define PCIF 5

// GIMSK
#define PCIE 5

// PCMSK
#define PCINT0 0


#define PCINT3 3

// USICR
#define USISIE 7
#define USIOIE 6
#define USIWM1 5
#define USIWM0 4
#define USICS1 3
#define USICS0 2
#define USICLK 1
#define USITC  0


#endif