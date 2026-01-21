/*
    PID: 38552
    injector offset adder BY maxey
*/

// INTERNAL OFFSETS
inline uintptr_t RawTaskScheduler = REBASE(0x8056DC8);

// EXTERNAL OFFSETS
inline uintptr_t Overlap = 0x288;
inline uintptr_t GlobalState = 0x140;
inline uintptr_t GetSetImplementation = 0x90;

// HYPERION OFFSETS
inline uintptr_t BitMap = REBASEHYPERION(0x2B378);
inline uintptr_t ControlFlowGuard = REBASEHYPERION(0xBAE7D0);
inline uintptr_t NtUnmapViewOfSectionSyscall = REBASEHYPERION(0x85BF7);
