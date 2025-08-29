_$s34AppleMediaServicesUIDynamicService20DynamicAccountsStoreC07accountH00I0AC9JetEngine8UnstableO0G0C_So9ACAccountCSgtcfc
_QWORD *__fastcall DynamicAccountsStore.init(accountStore:account:)(__int64 a1, __int64 a2)
{
  _QWORD *v2; // x20

  v2[2] = objc_msgSend(objc_allocWithZone((Class)&OBJC_CLASS___NSLock), "init");
  v2[3] = a2;
  v2[4] = a1;
  return v2;
}