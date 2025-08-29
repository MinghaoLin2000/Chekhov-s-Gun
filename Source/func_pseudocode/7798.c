_$s16EyeCandyGraphics9CGDisplayV10uuidStringSSSgvg
CFStringRef __fastcall CGDisplay.uuidString.getter(__int64 a1)
{
  __int64 v1; // x19
  CFUUIDRef v2; // x21
  CFStringRef result; // x0
  __int64 v4; // x1
  __CFString *v5; // x22
  CFUUIDRef uuid; // [xsp+0h] [xbp-30h] BYREF

  uuid = 0LL;
  if ( (unsigned int)CGSCopyDisplayUUID(a1, &uuid) )
    return 0LL;
  v2 = uuid;
  if ( !uuid )
    return 0LL;
  result = CFUUIDCreateString(0LL, uuid);
  if ( result )
  {
    v5 = (__CFString *)result;
    v1 = sub_10001CAD0(result, v4);
    objc_release(v2);
    objc_release(v5);
    return (CFStringRef)v1;
  }
  __break(1u);
  return result;
}