_XPCSetPlugInStateQueryInterface
__int64 __fastcall XPCSetPlugInStateQueryInterface(__int64 a1, CFUUIDBytes a2, _QWORD *a3)
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
           0x60u,
           0x86u,
           0xDEu,
           0x3Cu,
           0xEDu,
           0xBCu,
           0x45u,
           0x50u,
           0x81u,
           0x49u,
           0xEDu,
           0x3Cu,
           0xC7u,
           0xE2u,
           0xC2u,
           0x10u);
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