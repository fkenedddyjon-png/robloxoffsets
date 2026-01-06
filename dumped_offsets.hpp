/*
    PID: 23604
    injector offset adder BY maxey
*/

// INTERNAL OFFSETS
inline uintptr_t RawTaskScheduler = REBASE(0x81219C8);
inline uintptr_t FakeDataModelPointer = REBASE(0x8006F88);

// EXTERNAL OFFSETS
inline uintptr_t Overlap = 0x288;
inline uintptr_t GlobalState = 0x140;
inline uintptr_t RequireBypass = 0x0; // FAILED TO DUMP
inline uintptr_t GetSetImplementation = 0x90;
inline uintptr_t ClassDescriptor = 0x18;

// HYPERION OFFSETS
inline uintptr_t BitMap = REBASEHYPERION(0xF30408);
inline uintptr_t ControlFlowGuard = REBASEHYPERION(0xEFD210);
inline uintptr_t NtUnmapViewOfSectionSyscall = REBASEHYPERION(0x89B99C);
