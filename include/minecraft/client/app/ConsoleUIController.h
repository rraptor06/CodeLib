#pragma once

#include <code/code.h>
#include "../../ui/scene/UIScene.h"

namespace mc {
    class ConsoleUIController {
    public:
        static ConsoleUIController* getInstance() {
            #ifdef CEMU
                return (ConsoleUIController*) 0x104F73E0;
            #else
                return (ConsoleUIController*) 0x109F95E0;
            #endif
        }

        void PlayUISFX(struct SoundEvent* sound) {
            code::Func<void, 0x02DA7918, ConsoleUIController*, struct SoundEvent*>()(this, sound);
        }

        void ShowPressStart(int unk) {
	    code::Func<void, 0x02DA9670, ConsoleUIController*, int*>()(this, &unk);
	}

	void PressStartPlaying(int unk) {
	    code::Func<void, 0x02DA9360, ConsoleUIController*, int*>()(this, &unk);
	}

        void TouchBoxRebuild(UIScene* scene) {
            code::Func<void, 0x02d9e69c, ConsoleUIController*, UIScene*>()(this, scene);
        }
    };
}
