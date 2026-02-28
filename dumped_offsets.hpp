/*
    PID: 24520
    injector offset adder BY maxey
*/

// INTERNAL OFFSETS
inline uintptr_t RawTaskScheduler = REBASE(0x0); // FAILED TO DUMP
inline uintptr_t FakeDataModelPointer = REBASE(0x7E83168);

// EXTERNAL OFFSETS
inline uintptr_t Overlap = 0x288;
inline uintptr_t GlobalState = 0x140;
inline uintptr_t ClassDescriptor = 0x18;

// HYPERION OFFSETS
inline uintptr_t BitMap = REBASEHYPERION(0x16E1480);
inline uintptr_t ControlFlowGuard = REBASEHYPERION(0x4A6C40);
inline uintptr_t NtUnmapViewOfSectionSyscall = REBASEHYPERION(0x431D54);
