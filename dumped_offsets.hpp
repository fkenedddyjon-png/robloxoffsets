/*
    PID: 24400
    injector offset adder BY maxey
*/

// INTERNAL OFFSETS
inline uintptr_t RawTaskScheduler = REBASE(0x0); // FAILED TO DUMP
inline uintptr_t FakeDataModelPointer = REBASE(0x81D3EA8);

// EXTERNAL OFFSETS
inline uintptr_t Overlap = 0x288;
inline uintptr_t GlobalState = 0x140;
inline uintptr_t RequireBypass = 0x930;
inline uintptr_t GetSetImplementation = 0x90;
inline uintptr_t ClassDescriptor = 0x18;

// HYPERION OFFSETS
inline uintptr_t BitMap = REBASEHYPERION(0x133D0);
inline uintptr_t ControlFlowGuard = REBASEHYPERION(0x11AB390);
inline uintptr_t NtUnmapViewOfSectionSyscall = REBASEHYPERION(0x288912);
