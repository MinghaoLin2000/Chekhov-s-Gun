$s19ControlCenterHelper31ScreenMirroringAlertButtonStyleVwet
__int64 __fastcall getEnumTagSinglePayload for ScreenMirroringAlertButtonStyle(unsigned __int8 *a1, unsigned int a2)
{
  int v2; // w9
  int v3; // w8
  int v4; // w8
  int v5; // w8
  unsigned int v6; // w8
  bool v7; // cf

  if ( !a2 )
  {
    v5 = -1;
    return (unsigned int)(v5 + 1);
  }
  if ( a2 >= 0xFF )
  {
    if ( a2 + 1 >= 0xFFFF00 )
      v2 = 4;
    else
      v2 = 2;
    if ( (a2 + 1) >> 8 < 0xFF )
      v3 = 1;
    else
      v3 = v2;
    if ( v3 == 4 )
    {
      v4 = *(_DWORD *)(a1 + 1);
      if ( !v4 )
        goto LABEL_17;
    }
    else if ( v3 == 2 )
    {
      v4 = *(unsigned __int16 *)(a1 + 1);
      if ( !*(_WORD *)(a1 + 1) )
        goto LABEL_17;
    }
    else
    {
      v4 = a1[1];
      if ( !a1[1] )
        goto LABEL_17;
    }
    v5 = (*a1 | (v4 << 8)) - 2;
    return (unsigned int)(v5 + 1);
  }
LABEL_17:
  v6 = *a1;
  v7 = v6 >= 2;
  v5 = (v6 + 2147483646) & 0x7FFFFFFF;
  if ( !v7 )
    v5 = -1;
  return (unsigned int)(v5 + 1);
}