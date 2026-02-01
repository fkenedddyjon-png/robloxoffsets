/*
    PID: 6024
    injector offset adder BY maxey
*/

// INTERNAL OFFSETS
inline uintptr_t RawTaskScheduler = REBASE(0x80AB1C8);
inline uintptr_t FakeDataModelPointer = REBASE(0x8014E88);

// EXTERNAL OFFSETS
inline uintptr_t PropertyDescriptor = 0x0; // FAILED TO DUMP
inline uintptr_t Overlap = 0x288;
inline uintptr_t GlobalState = 0x140;
inline uintptr_t RequireBypass = 0x8E9;
inline uintptr_t GetSetImplementation = 0x90;
inline uintptr_t ClassDescriptor = 0x18;

// HYPERION OFFSETS
inline uintptr_t BitMap = REBASEHYPERION(0xFF6110);
inline uintptr_t ControlFlowGuard = REBASEHYPERION(0xAA0F00);
inline uintptr_t NtUnmapViewOfSectionSyscall = REBASEHYPERION(0x4B302C);
