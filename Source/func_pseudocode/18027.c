_PremountHomeDirectoryWithAuthentication
__int64 __fastcall PremountHomeDirectoryWithAuthentication(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char *__s,
        __int64 a11)
{
  __int64 vars8; // [xsp+58h] [xbp+8h]

  if ( a9 )
    return 45LL;
  if ( __s && strlen(__s) != a11 )
    return 22LL;
  LODWORD(a9) = 3;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return NetFSMountHomeDirectoryWithAuthentication(a1, a3, a2, a4, a5, a6, a8, __s, a9, 0LL);
}