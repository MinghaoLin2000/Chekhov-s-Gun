_$s34AppleMediaServicesUIDynamicService20DynamicAccountsStoreCfD
__int64 DynamicAccountsStore.__deallocating_deinit()
{
  __int64 v0; // x20
  __int64 vars8; // [xsp+8h] [xbp+8h]

  DynamicAccountsStore.deinit();
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _swift_deallocClassInstance(v0, 40LL, 7LL);
}