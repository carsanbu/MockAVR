#ifndef MOCK_AVR_EEPROM_H
#define MOCK_AVR_EEPROM_H

#include <stdint.h>

#define EEMEM

static inline uint8_t eeprom_read_byte(const uint8_t *__p) { }
static inline uint16_t eeprom_read_word (const uint16_t *__p) { }
static inline uint32_t eeprom_read_dword (const uint32_t *__p) { }
static inline void eeprom_write_byte (uint8_t *__p, uint8_t __value) { }
static inline void eeprom_write_word (uint16_t *__p, uint16_t __value) { }
static inline void eeprom_write_dword (uint32_t *__p, uint32_t __value) { }

#endif // MOCK_AVR_EEPROM_H