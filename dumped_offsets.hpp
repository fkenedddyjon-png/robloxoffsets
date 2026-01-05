/*
    PID: 49728
    injector offset adder BY maxey
*/

// INTERNAL OFFSETS
inline uintptr_t RawTaskScheduler = REBASE(0x7E1CB88);
inline uintptr_t FakeDataModelPointer = REBASE(0x7D03628);

// EXTERNAL OFFSETS
inline uintptr_t Overlap = 0x288;
inline uintptr_t GlobalState = 0x140;
inline uintptr_t RequireBypass = 0x920;
inline uintptr_t GetSetImplementation = 0x90;
inline uintptr_t Name = 0xB0;
inline uintptr_t GameLoaded = 0x600;
inline uintptr_t Children = 0x70;
inline uintptr_t Workspace = 0x178;
inline uintptr_t ClassDescriptor = 0x18;
inline uintptr_t Camera = 0x450;
inline uintptr_t LocalPlayer = 0x130;
inline uintptr_t JumpPower = 0x1B0;
inline uintptr_t Health = 0x194;
inline uintptr_t ScriptContext = 0x3F0;

// HYPERION OFFSETS
inline uintptr_t BitMap = REBASEHYPERION(0x11658F8);
inline uintptr_t ControlFlowGuard = REBASEHYPERION(0xEFC5F0);
inline uintptr_t NtUnmapViewOfSectionSyscall = REBASEHYPERION(0xD8E426);
