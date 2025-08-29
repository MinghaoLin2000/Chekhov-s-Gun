$s9SPIHelper12ErrorMessageVwet_0
__int64 __fastcall _s9SPIHelper12ErrorMessageVwet_0(__int64 a1, int a2)
{
  unsigned __int64 v2; // x8

  if ( !a2 )
    return 0LL;
  if ( a2 < 0 && *(_BYTE *)(a1 + 40) )
    return *(_DWORD *)a1 + 0x80000000;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 >= 0xFFFFFFFF )
    LODWORD(v2) = -1;
  return (unsigned int)(v2 + 1);
}