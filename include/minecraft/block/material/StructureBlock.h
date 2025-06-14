#pragma once

#include <code/code.h>

namespace mc {
    class StructureBlock {
    public:
        static StructureBlock* getInstance() {
            return code::Func<StructureBlock*, 0x02972F18>()();
        }
    };
}
