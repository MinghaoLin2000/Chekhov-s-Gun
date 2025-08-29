_$s34AppleMediaServicesUIDynamicService20DynamicAccountsStoreC07accountH09JetEngine8UnstableO0G0Cvs
__int64 __fastcall DynamicAccountsStore.accountStore.setter(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x0
  _BYTE v5[24]; // [xsp+8h] [xbp-28h] BYREF

  swift_beginAccess(v1 + 32, v5, 1LL, 0LL);
  v3 = *(_QWORD *)(v1 + 32);
  *(_QWORD *)(v1 + 32) = a1;
  return swift_release(v3);
}