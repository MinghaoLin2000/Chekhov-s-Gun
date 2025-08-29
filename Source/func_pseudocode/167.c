$s9SPIHelper10UTISupportO15SharingItemTypeOwet
__int64 __fastcall getEnumTagSinglePayload for UTISupport.SharingItemType(unsigned __int8 *a1, unsigned int a2)
{
  int v2; // w9
  int v3; // w8
  int v4; // w8
  unsigned int v6; // w8
  bool v7; // cf
  int v8; // w8

  if ( !a2 )
    return 0LL;
  if ( a2 < 0xF3 )
    goto LABEL_17;
  if ( a2 + 13 >= 0xFFFF00 )
    v2 = 4;
  else
    v2 = 2;
  if ( (a2 + 13) >> 8 < 0xFF )
    v3 = 1;
  else
    v3 = v2;
  if ( v3 == 4 )
  {
    v4 = *(_DWORD *)(a1 + 1);
    if ( v4 )
      return (*a1 | (unsigned int)(v4 << 8)) - 13;
  }
  else
  {
    if ( v3 == 2 )
    {
      v4 = *(unsigned __int16 *)(a1 + 1);
      if ( !*(_WORD *)(a1 + 1) )
        goto LABEL_17;
      return (*a1 | (unsigned int)(v4 << 8)) - 13;
    }
    v4 = a1[1];
    if ( a1[1] )
      return (*a1 | (unsigned int)(v4 << 8)) - 13;
  }
LABEL_17:
  v6 = *a1;
  v7 = v6 >= 0xE;
  v8 = v6 - 14;
  if ( !v7 )
    v8 = -1;
  return (unsigned int)(v8 + 1);
}