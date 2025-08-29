_uarpCopyDefaultInfoString
__int64 __fastcall uarpCopyDefaultInfoString(_DWORD *a1, __int64 a2)
{
  if ( (unsigned int)a2 < 7 )
    return 0LL;
  *(_DWORD *)((char *)a1 + 3) = 1314344782;
  *a1 = 1313558101;
  return a2;
}