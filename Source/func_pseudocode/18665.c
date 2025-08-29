$s17ControlCenterCore25_NavigationHiddenModifierVwet
__int64 __fastcall getEnumTagSinglePayload for _NavigationHiddenModifier(unsigned __int8 *a1, unsigned int a2)
{
  int v2; // w8
  unsigned int v3; // w8
  bool v4; // cf

  if ( a2 )
  {
    if ( a2 >= 0xFF && a1[49] )
    {
      v2 = *(_DWORD *)a1 + 254;
    }
    else
    {
      v3 = *a1;
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