$s19ControlCenterHelper20ScreenMirroringAlertC8ResponseVwst
__int64 __fastcall storeEnumTagSinglePayload for ScreenMirroringAlert.Response(
        __int64 result,
        unsigned int a2,
        unsigned int a3)
{
  if ( a2 > 0xFE )
  {
    *(_BYTE *)(result + 8) = 0;
    *(_QWORD *)result = a2 - 255;
    if ( a3 >= 0xFF )
      *(_BYTE *)(result + 9) = 1;
  }
  else
  {
    if ( a3 >= 0xFF )
      *(_BYTE *)(result + 9) = 0;
    if ( a2 )
      *(_BYTE *)(result + 8) = a2 + 1;
  }
  return result;
}