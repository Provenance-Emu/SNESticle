
#ifndef _PS2MEM_H
#define _PS2MEM_H


#define PS2MEM_ADDR_SCRATCHPAD      (0x70000000)
#define PS2MEM_ADDR_VU0MICROMEM     (0x11000000)
#define PS2MEM_ADDR_VU0DATAMEM      (0x11004000)
#define PS2MEM_ADDR_VU1MICROMEM     (0x11008000)
#define PS2MEM_ADDR_VU1DATAMEM      (0x1100C000)

#define PS2MEM_SCRATCHPAD           (PS2MEM_ADDR_SCRATCHPAD)


#define PS2MEM_CACHED(_Addr)        (((Uint32)_Addr)&0x0FFFFFFF)
#define PS2MEM_UNCACHED(_Addr)      (((Uint32)_Addr)|0x20000000)
#define PS2MEM_UNCACHEDACCEL(_Addr) (((Uint32)_Addr)|0x30000000)


#endif

