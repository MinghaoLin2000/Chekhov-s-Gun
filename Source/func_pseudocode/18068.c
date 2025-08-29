_RemountInfoQueryInterface
__int64 __fastcall RemountInfoQueryInterface(__int64 a1, CFUUIDBytes a2, _QWORD *a3)
{
  CFUUIDRef v5; // x0
  CFUUIDRef v6; // x20
  CFUUIDRef v7; // x0
  CFUUIDRef v8; // x0

  v5 = CFUUIDCreateFromUUIDBytes(0LL, a2);
  if ( v5 )
  {
    v6 = v5;
    v7 = CFUUIDGetConstantUUIDWithBytes(
           kCFAllocatorSystemDefault,
           0x13u,
           0xC5u,
           0x39u,
           0x62u,
           0x45u,
           9u,
           0x48u,
           0x3Fu,
           0x88u,
           0x52u,
           0x39u,
           0x85u,
           0x76u,
           0x5Au,
           0x3Fu,
           0x92u);
    if ( CFEqual(v6, v7)
      || (v8 = CFUUIDGetConstantUUIDWithBytes(
                 kCFAllocatorSystemDefault,
                 0,
                 0,
                 0,
                 0,
                 0,
                 0,
                 0,
                 0,
                 0xC0u,
                 0,
                 0,
                 0,
                 0,
                 0,
                 0,
                 0x46u),
          CFEqual(v6, v8)) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
      *a3 = a1;
      CFRelease(v6);
      return 0LL;
    }
    else
    {
      *a3 = 0LL;
      CFRelease(v6);
      return 2147483652LL;
    }
  }
  else
  {
    *a3 = 0LL;
    return 2147549183LL;
  }
}