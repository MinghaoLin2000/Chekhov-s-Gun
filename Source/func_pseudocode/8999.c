_$s34AppleMediaServicesUIDynamicService11ObjectGraphCfD
__int64 ObjectGraph.__deallocating_deinit()
{
  __int64 v0; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v0 = sub_100045C38();
  objc_release(*(id *)(v0 + qword_10005DA80));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _swift_deallocClassInstance(v0, 24LL, 7LL);
}