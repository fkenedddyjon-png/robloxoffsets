/*
    PID: 27064
    injector offset adder BY maxey
*/

// INTERNAL OFFSETS
inline uintptr_t RawTaskScheduler = REBASE(0x7EF3C48);
inline uintptr_t FakeDataModelPointer = REBASE(0x7E35858);

// EXTERNAL OFFSETS
inline uintptr_t PropertyDescriptor = 0x0; // FAILED TO DUMP
inline uintptr_t Overlap = 0x288;
inline uintptr_t GlobalState = 0x140;
inline uintptr_t RequireBypass = 0x948;
inline uintptr_t GetSetImplementation = 0x90;
inline uintptr_t ClassDescriptor = 0x18;

// HYPERION OFFSETS
inline uintptr_t BitMap = REBASEHYPERION(0x14760);
inline uintptr_t ControlFlowGuard = REBASEHYPERION(0x14415D0);
inline uintptr_t NtUnmapViewOfSectionSyscall = REBASEHYPERION(0x748F3D);
