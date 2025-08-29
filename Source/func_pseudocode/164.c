$s9SPIHelper11SharingTypeOwst
_BYTE *__fastcall storeEnumTagSinglePayload for SharingType(_BYTE *result, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // w8
  int v4; // w9
  unsigned int v5; // w8
  __int64 v6; // x16
  unsigned int v7; // w8

  v3 = a3 + 9;
  if ( a3 + 9 >= 0xFFFF00 )
    v4 = 4;
  else
    v4 = 2;
  if ( v3 >> 8 < 0xFF )
    v4 = 1;
  if ( v3 >= 0x100 )
    v5 = v4;
  else
    v5 = 0;
  if ( a3 >= 0xF7 )
    v6 = v5;
  else
    v6 = 0LL;
  if ( a2 > 0xF6 )
  {
    v7 = ((a2 - 247) >> 8) + 1;
    *result = a2 + 9;
    switch ( v6 )
    {
      case 1LL:
        result[1] = v7;
        break;
      case 2LL:
        *(_WORD *)(result + 1) = v7;
        break;
      case 3LL:
LABEL_25:
        __break(1u);
        JUMPOUT(0x1000A02BCLL);
      case 4LL:
        *(_DWORD *)(result + 1) = v7;
        break;
      default:
        return result;
    }
  }
  else
  {
    switch ( v6 )
    {
      case 1LL:
        result[1] = 0;
        if ( !a2 )
          return result;
        goto LABEL_20;
      case 2LL:
        *(_WORD *)(result + 1) = 0;
        goto LABEL_19;
      case 3LL:
        goto LABEL_25;
      case 4LL:
        *(_DWORD *)(result + 1) = 0;
        if ( !a2 )
          return result;
        goto LABEL_20;
      default:
LABEL_19:
        if ( a2 )
LABEL_20:
          *result = a2 + 9;
        break;
    }
  }
  return result;
}