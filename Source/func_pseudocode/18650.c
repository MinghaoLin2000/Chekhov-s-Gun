$s17ControlCenterCore19_NavigationModifierVwst
__int64 __fastcall storeEnumTagSinglePayload for _NavigationModifier(__int64 result, unsigned int a2, unsigned int a3)
{
  if ( a2 > 0x7FFFFFFE )
  {
    *(_QWORD *)(result + 72) = 0LL;
    *(_OWORD *)(result + 56) = 0u;
    *(_OWORD *)(result + 40) = 0u;
    *(_OWORD *)(result + 24) = 0u;
    *(_OWORD *)(result + 8) = 0u;
    *(_BYTE *)(result + 80) = 0;
    *(_QWORD *)result = a2 - 0x7FFFFFFF;
    if ( a3 >= 0x7FFFFFFF )
      *(_BYTE *)(result + 81) = 1;
  }
  else
  {
    if ( a3 >= 0x7FFFFFFF )
      *(_BYTE *)(result + 81) = 0;
    if ( a2 )
      *(_QWORD *)result = a2;
  }
  return result;
}