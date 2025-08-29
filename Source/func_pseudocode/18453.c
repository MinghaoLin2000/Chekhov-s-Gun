$s19ControlCenterHelper20ScreenMirroringAlertC8ResponseVwet
__int64 __fastcall getEnumTagSinglePayload for ScreenMirroringAlert.Response(__int64 a1, unsigned int a2)
{
  int v2; // w8
  unsigned int v3; // w8
  bool v4; // cf

  if ( a2 )
  {
    if ( a2 >= 0xFF && *(_BYTE *)(a1 + 9) )
    {
      v2 = *(_DWORD *)a1 + 254;
    }
    else
    {
      v3 = *(unsigned __int8 *)(a1 + 8);
      v4 = v3 >= 2;
      v2 = (v3 + 2147483646) & 0x7FFFFFFF;
      if ( !v4 )
        v2 = -1;
    }
  }
  else
  {
    v2 = -1;
  }
  return (unsigned int)(v2 + 1);
}