$s27BackgroundReplacementHelper15BackgroundsGridVwet
__int64 __fastcall getEnumTagSinglePayload for BackgroundsGrid(__int64 a1, unsigned int a2)
{
  int v2; // w8
  unsigned __int64 v3; // x8

  if ( a2 )
  {
    if ( a2 >= 0x7FFFFFFF && *(_BYTE *)(a1 + 33) )
    {
      v2 = *(_DWORD *)a1 + 2147483646;
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 24);
      if ( v3 >= 0xFFFFFFFF )
        LODWORD(v3) = -1;
      v2 = v3 - 1;
      if ( v2 < 0 )
        v2 = -1;
    }
  }
  else
  {
    v2 = -1;
  }
  return (unsigned int)(v2 + 1);
}