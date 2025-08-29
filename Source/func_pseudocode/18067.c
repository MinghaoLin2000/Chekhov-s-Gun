_NetFSQueryInterface
HRESULT __cdecl NetFSQueryInterface(void *a1, REFIID iid, LPVOID *ppv)
{
  CFUUIDRef v5; // x0
  CFUUIDRef v6; // x20
  CFUUIDRef v7; // x0
  CFUUIDRef v8; // x0

  v5 = CFUUIDCreateFromUUIDBytes(0LL, iid);
  if ( v5 )
  {
    v6 = v5;
    v7 = CFUUIDGetConstantUUIDWithBytes(
           0LL,
           0x8Fu,
           0x34u,
           0xB6u,
           0xC4u,
           0xF2u,
           0xE4u,
           0x4Eu,
           0xCDu,
           0x86u,
           0x25u,
           0xE5u,
           0x66u,
           0x58u,
           0x11u,
           0xDEu,
           0x37u);
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
      (*(void (__fastcall **)(void *))(*(_QWORD *)a1 + 16LL))(a1);
      *ppv = a1;
      CFRelease(v6);
      return 0;
    }
    else
    {
      *ppv = 0LL;
      CFRelease(v6);
      return -2147483644;
    }
  }
  else
  {
    *ppv = 0LL;
    return -2147418113;
  }
}