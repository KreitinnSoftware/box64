#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <errno.h>
#include <assert.h>

#include "debug.h"
#include "box64context.h"
#include "dynarec.h"
#include "emu/x64emu_private.h"
#include "emu/x64run_private.h"
#include "x64run.h"
#include "x64emu.h"
#include "box64stack.h"
#include "callback.h"
#include "emu/x64run_private.h"
#include "x64trace.h"
#include "dynarec_native.h"

#include "rv64_printer.h"
#include "dynarec_rv64_private.h"
#include "dynarec_rv64_helper.h"
#include "dynarec_rv64_functions.h"

uintptr_t dynarec64_67_vector(dynarec_rv64_t* dyn, uintptr_t addr, uintptr_t ip, int ninst, rex_t rex, int rep, int* ok, int* need_epilog)
{
    (void)ip;
    (void)need_epilog;

    uint8_t opcode = F8;
    uint8_t nextop;
    uint8_t gd, ed, wback, wb, wb1, wb2, gb, gb1, gb2, eb1, eb2;
    int64_t fixedaddress;
    int unscaled;
    int8_t i8;
    uint8_t u8;
    int32_t i32;
    int64_t j64, i64;
    int cacheupd = 0;
    int lock;
    int v0, v1, s0;
    MAYUSE(i32);
    MAYUSE(j64);
    MAYUSE(v0);
    MAYUSE(v1);
    MAYUSE(s0);
    MAYUSE(lock);
    MAYUSE(cacheupd);

    if (rex.is32bits) {
        // should do a different file
        DEFAULT;
        return addr;
    }

    GETREX();

    rep = 0;
    while ((opcode == 0xF2) || (opcode == 0xF3)) {
        rep = opcode - 0xF1;
        opcode = F8;
    }

    switch (opcode) {
        case 0x0F:
            opcode = F8;
            switch (opcode) {
                case 0x11:
                    DEFAULT_VECTOR;
                case 0x2E:
                case 0x2F:
                    DEFAULT_VECTOR;
                case 0x6F:
                    switch (rep) {
                        case 2:
                            DEFAULT_VECTOR;
                        default: return 0;
                    }
                    break;
                case 0x7F:
                    switch (rep) {
                        case 2:
                            DEFAULT_VECTOR;
                        default: return 0;
                    }
                    break;
                default:
                    return 0;
            }
            break;
        case 0x66:
            opcode = F8;
            GETREX();
            switch (opcode) {
                case 0x0F:
                    nextop = F8;
                    switch (nextop) {
                        case 0x7E:
                            DEFAULT_VECTOR;
                        case 0xD6:
                            DEFAULT_VECTOR;
                        case 0xFE:
                            DEFAULT_VECTOR;
                        default:
                            return 0;
                    }
                    break;
                default:
                    return 0;
            }
            break;
        default:
            return 0;
    }
    return addr;
}