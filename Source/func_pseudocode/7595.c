$s9DimensionOwet
__int64 __fastcall _s9DimensionOwet(__int64 a1, unsigned int a2)
{
  int v2; // w8
  unsigned int v3; // w8

  if ( a2 )
  {
    if ( a2 >= 0xFD && *(_BYTE *)(a1 + 9) )
    {
      v2 = *(_DWORD *)a1 + 252;
    }
    else
    {
      v3 = *(unsigned __int8 *)(a1 + 8);
      if ( v3 <= 3 )
        v2 = -1;
      else
        v2 = v3 ^ 0xFF;
    }
  }
  else
  {
    v2 = -1;
  }
  return (unsigned int)(v2 + 1);
}