/*
    PID: 32796
    injector offset adder BY maxey
*/

// INTERNAL OFFSETS
inline uintptr_t RawTaskScheduler = REBASE(0x7E1CB88);
inline uintptr_t FakeDataModelPointer = REBASE(0x7D03628);

// EXTERNAL OFFSETS
inline uintptr_t Overlap = 0x288;
inline uintptr_t GlobalState = 0x140;
inline uintptr_t RequireBypass = 0x0; // FAILED TO DUMP
inline uintptr_t ClassDescriptor = 0x18;

// HYPERION OFFSETS
inline uintptr_t BitMap = REBASEHYPERION(0x11658F8);
inline uintptr_t ControlFlowGuard = REBASEHYPERION(0xEFC5F0);
inline uintptr_t NtUnmapViewOfSectionSyscall = 0x0; // FAILED TO DUMP
