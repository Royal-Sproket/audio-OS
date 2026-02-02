#include "wakeword.h"
#include "voice_login.h"
#include "voice_command.h"
#include "audio_input.h"
#include "app_manager.h"
#include <iostream>

int main() {
    audio_input_init();

    while (true) {
        if (detect_wake_word()) {
            if (voice_login()) {
                while (true) {
                    std::string cmd = get_voice_command();
                    if (!handle_command(cmd))
                        break; // User logs out or requests shutdown
                }
            }
        }
    }

    audio_input_cleanup();
    return 0;
}
