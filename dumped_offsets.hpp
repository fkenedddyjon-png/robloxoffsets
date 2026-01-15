/*
    PID: 30800
    injector offset adder BY maxey
*/

// INTERNAL OFFSETS
inline uintptr_t RawTaskScheduler = REBASE(0x8119EC8);
inline uintptr_t FakeDataModelPointer = REBASE(0x7FF0818);

// EXTERNAL OFFSETS
inline uintptr_t Overlap = 0x288;
inline uintptr_t GlobalState = 0x140;
inline uintptr_t RequireBypass = 0x964;
inline uintptr_t GetSetImplementation = 0x90;
inline uintptr_t ClassDescriptor = 0x18;

// HYPERION OFFSETS
inline uintptr_t BitMap = REBASEHYPERION(0x1C55C8);
inline uintptr_t ControlFlowGuard = REBASEHYPERION(0xD3ADF0);
inline uintptr_t NtUnmapViewOfSectionSyscall = REBASEHYPERION(0x5F08E4);
