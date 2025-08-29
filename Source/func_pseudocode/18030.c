_NetFSUnmountHomeDirectory
__int64 __fastcall NetFSUnmountHomeDirectory(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // x20
  char *v8; // x0
  size_t v9; // x0
  CFURLRef v10; // x0
  const __CFURL *v11; // x21
  DASessionRef v12; // x0
  __DASession *v13; // x20
  DADiskRef v14; // x0
  __DADisk *v15; // x22
  char v16; // [xsp+1Eh] [xbp-442h] BYREF
  char v17; // [xsp+1Fh] [xbp-441h] BYREF
  int __errnum; // [xsp+20h] [xbp-440h] BYREF
  char __s[1025]; // [xsp+27h] [xbp-439h] BYREF

  v6 = sub_1000063A4(a1, a2, __s, &v17, &v16);
  __errnum = v6;
  if ( !(_DWORD)v6 )
  {
    v6 = 0LL;
    switch ( (unsigned int)sub_100006AD0(__s, a3, &__errnum) )
    {
      case 1u:
      case 3u:
        return v6;
      case 2u:
        return 1LL;
      case 4u:
        return 2LL;
      case 5u:
        v6 = (unsigned int)__errnum;
        v8 = strerror(__errnum);
        syslog_DARWIN_EXTSN(3, "NetFSUnmountHomeDirectory: Checking accessiblility of '%s' failed: %s.", __s, v8);
        return v6;
      default:
        v9 = strlen(__s);
        v10 = CFURLCreateFromFileSystemRepresentation(kCFAllocatorDefault, (const UInt8 *)__s, v9, 1u);
        if ( !v10 )
          goto LABEL_12;
        v11 = v10;
        v12 = DASessionCreate(kCFAllocatorDefault);
        if ( v12 )
        {
          v13 = v12;
          *__error() = 22;
          v14 = DADiskCreateFromVolumePath(kCFAllocatorDefault, v13, v11);
          if ( v14 )
          {
            v15 = v14;
            CFRelease(v11);
            DADiskUnmount(v15, (a4 << 8) & 0x80000, 0LL, 0LL);
            CFRelease(v15);
            CFRelease(v13);
            v6 = 0LL;
          }
          else
          {
            CFRelease(v13);
            CFRelease(v11);
            v6 = (unsigned int)*__error();
          }
        }
        else
        {
          CFRelease(v11);
LABEL_12:
          v6 = 12LL;
        }
        break;
    }
  }
  return v6;
}