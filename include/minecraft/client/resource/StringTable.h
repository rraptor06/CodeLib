#pragma once

#include <code/code.h>

namespace mc {
    class StringTable {
    public:
        static StringTable* getInstance() {
            #ifdef CEMU
                return (StringTable*) 0x10ECE920;
            #else
                return (StringTable*) 0x109CC720;
            #endif
        }
    };
}
