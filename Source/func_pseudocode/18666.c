$s17ControlCenterCore25_NavigationHiddenModifierVwst
__int64 __fastcall storeEnumTagSinglePayload for _NavigationHiddenModifier(
        __int64 result,
        unsigned int a2,
        unsigned int a3)
{
  if ( a2 > 0xFE )
  {
    *(_QWORD *)(result + 40) = 0LL;
    *(_OWORD *)(result + 24) = 0u;
    *(_OWORD *)(result + 8) = 0u;
    *(_BYTE *)(result + 48) = 0;
    *(_QWORD *)result = a2 - 255;
    if ( a3 >= 0xFF )
      *(_BYTE *)(result + 49) = 1;
  }
  else
  {
    if ( a3 >= 0xFF )
      *(_BYTE *)(result + 49) = 0;
    if ( a2 )
      *(_BYTE *)result = a2 + 1;
  }
  return result;
}