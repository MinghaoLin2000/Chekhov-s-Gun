_$s19ControlCenterHelper04WiFiC0C6__lock33_F14D4C22208E7A416F4CC2A655BC16A0LLAA10UnfairLockCvpfi
__int64 variable initialization expression of WiFiHelper.__lock()
{
  __int64 v0; // x0
  __int64 v1; // x19
  _DWORD *v2; // x0

  v0 = type metadata accessor for UnfairLock(0LL);
  v1 = swift_allocObject(v0, 24LL, 7LL);
  v2 = (_DWORD *)swift_slowAlloc(4LL, -1LL);
  *v2 = 0;
  *(_QWORD *)(v1 + 16) = v2;
  return v1;
}