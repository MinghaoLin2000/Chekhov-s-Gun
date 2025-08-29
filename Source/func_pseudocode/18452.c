$s19ControlCenterHelper20ScreenMirroringAlertC8ResponseVwCP
__int64 __fastcall initializeBufferWithCopyOfBuffer for ScreenMirroringAlert.Response(__int64 result, __int64 *a2)
{
  __int64 v2; // x8

  v2 = *a2;
  *(_BYTE *)(result + 8) = *((_BYTE *)a2 + 8);
  *(_QWORD *)result = v2;
  return result;
}