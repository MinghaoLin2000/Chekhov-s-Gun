+[NSString tsu_stringWithUUID]
id __cdecl +[NSString tsu_stringWithUUID](id a1, SEL a2)
{
  const __CFUUID *v2; // x0
  const __CFUUID *v3; // x19
  __CFString *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = CFUUIDCreate(0LL);
  if ( v2 )
  {
    v3 = v2;
    v4 = (__CFString *)CFUUIDCreateString(0LL, v2);
    CFRelease(v3);
  }
  else
  {
    v4 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}