_uarpPlatformCompareHash
bool __fastcall uarpPlatformCompareHash(__int64 a1, void *__s1, size_t __n, void *__s2, int a5)
{
  if ( !*(_QWORD *)(a1 + 376) )
    return 1LL;
  if ( (_DWORD)__n == a5 )
    return memcmp(__s1, __s2, (unsigned int)__n) == 0;
  return 0LL;
}