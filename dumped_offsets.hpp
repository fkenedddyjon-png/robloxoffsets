/*
    PID: 41584
    injector offset adder BY maxey
*/

// INTERNAL OFFSETS
inline uintptr_t RawTaskScheduler = REBASE(0x8057E48);
inline uintptr_t FakeDataModelPointer = REBASE(0x7FA1988);

// EXTERNAL OFFSETS
inline uintptr_t PropertyDescriptor = 0x50;
inline uintptr_t Overlap = 0x288;
inline uintptr_t GlobalState = 0x140;
inline uintptr_t RequireBypass = 0x970;
inline uintptr_t GetSetImplementation = 0x90;
inline uintptr_t ClassDescriptor = 0x18;

// HYPERION OFFSETS
inline uintptr_t BitMap = REBASEHYPERION(0x106E0B8);
inline uintptr_t ControlFlowGuard = REBASEHYPERION(0x41B840);
inline uintptr_t NtUnmapViewOfSectionSyscall = REBASEHYPERION(0x592042);
