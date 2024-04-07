#import <OpenLoco/Interop/Interop.hpp>

namespace OpenLoco::Interop {
    int32_t call(int32_t address[[gnu::unused]]) {
        return 0;
    }
    int32_t call(int32_t address [[gnu::unused]], registers& registers[[gnu::unused]]){
        return 0;
    }

    void registerHooks() {
        // Register hooks here
    }

    void registerHook(uintptr_t address [[gnu::unused]], hook_function function [[gnu::unused]]) {
        // Register hook here
    }

    void loadSections() {

        auto f = fopen("/oloco_data", "rb");
        fseek(f, 0, SEEK_END);
        long fsize = ftell(f);
        fseek(f, 0, SEEK_SET); /* same as rewind(f); */
        char* startPointer = (char*)0x4d7000;

        fread(startPointer, fsize, 1, f);
        fclose(f);

        printf("Loaded %ld bytes\n", fsize);
        printf("Start at %p %x\n", startPointer, *startPointer);
        // Load sections here
    }
}