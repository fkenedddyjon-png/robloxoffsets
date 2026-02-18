/*
    PID: 25172
    injector offset adder BY maxey
*/

// INTERNAL OFFSETS
inline uintptr_t RawTaskScheduler = REBASE(0x7E4ED08);
inline uintptr_t FakeDataModelPointer = REBASE(0x7D909F8);

// EXTERNAL OFFSETS
inline uintptr_t PropertyDescriptor = 0x50;
inline uintptr_t Overlap = 0x288;
inline uintptr_t GlobalState = 0x140;
inline uintptr_t RequireBypass = 0x969;
inline uintptr_t GetSetImplementation = 0x7FF6A39B;
inline uintptr_t ClassDescriptor = 0x18;

// HYPERION OFFSETS
inline uintptr_t BitMap = REBASEHYPERION(0x1682AB0);
inline uintptr_t ControlFlowGuard = REBASEHYPERION(0x50E0C0);
inline uintptr_t NtUnmapViewOfSectionSyscall = REBASEHYPERION(0x15926D);
