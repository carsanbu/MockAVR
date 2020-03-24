#ifndef MOCK_SFR_DEFS_H
#define MOCK_SFR_DEFS_H

#define _BV(bit) (1 << (bit))
#define bit_is_set(byte, bit)       (byte & _BV(bit))
#define bit_is_clear(byte, bit)     ( !(byte & _BV(bit)) )

#endif
