$s9SPIHelper11SharingTypeOwet
__int64 __fastcall getEnumTagSinglePayload for SharingType(unsigned __int8 *a1, unsigned int a2)
{
  unsigned int v2; // w8
  unsigned int v3; // w9
  __int64 v4; // x16
  int v5; // w8
  unsigned int v7; // w8
  unsigned int v8; // w8

  if ( !a2 )
    return 0LL;
  if ( a2 >= 0xF7 )
  {
    v2 = a2 + 9;
    if ( a2 + 9 >= 0xFFFF00 )
      v3 = 4;
    else
      v3 = 2;
    if ( v2 >> 8 < 0xFF )
      v3 = 1;
    if ( v2 >= 0x100 )
      v4 = v3;
    else
      v4 = 0LL;
    switch ( v4 )
    {
      case 1LL:
        v5 = a1[1];
        if ( !a1[1] )
          break;
        return (*a1 | (unsigned int)(v5 << 8)) - 9;
      case 2LL:
        v5 = *(unsigned __int16 *)(a1 + 1);
        if ( *(_WORD *)(a1 + 1) )
          return (*a1 | (unsigned int)(v5 << 8)) - 9;
        break;
      case 3LL:
        __break(1u);
        JUMPOUT(0x1000A01D4LL);
      case 4LL:
        v5 = *(_DWORD *)(a1 + 1);
        if ( !v5 )
          break;
        return (*a1 | (unsigned int)(v5 << 8)) - 9;
      default:
        break;
    }
  }
  v7 = *a1;
  if ( v7 >= 8 )
    v8 = v7 - 7;
  else
    v8 = 0;
  if ( v8 >= 3 )
    return v8 - 2;
  else
    return 0LL;
}