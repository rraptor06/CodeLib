#pragma once

#include <code/code.h>

#include "wstring.h"

namespace mc {
    class L10N {
    public:
        static wchar_t GetString(int32_t table) {
            code::Func<wchar_t, 0x02F24864, L10N*, int32_t>()(this, table);
        }

        static void ReplaceString(uint32_t table, const wchar_t *target) {
            mc_wcscpy((wchar_t*)L10N::GetString(table), target);
        }
    };
}
