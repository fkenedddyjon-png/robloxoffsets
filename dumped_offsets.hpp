/*
    PID: 47400
    DUMPER BY VOLXPHY
    REPO: https://github.com/fkenedddyjon-png/robloxoffsets
*/

// INTERNAL OFFSETS
inline uintptr_t RawTaskScheduler = REBASE(0x7E1CB88);
inline uintptr_t FakeDataModelPointer = REBASE(0x7D03628);

// EXTERNAL OFFSETS
inline uintptr_t Overlap = 0x288;
inline uintptr_t GlobalState = 0x140;
inline uintptr_t RequireBypass = 0x920;
inline uintptr_t GetSetImplementation = 0x90;
inline uintptr_t ClassDescriptor = 0x18;

// HYPERION OFFSETS
inline uintptr_t BitMap = REBASEHYPERION(0x51F18);
inline uintptr_t ControlFlowGuard = REBASEHYPERION(0x321920);
inline uintptr_t NtUnmapViewOfSectionSyscall = REBASEHYPERION(0x72B527);
