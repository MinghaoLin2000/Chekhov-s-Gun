_UARPLayer2StagedFirmwareVersion2
__int64 __fastcall UARPLayer2StagedFirmwareVersion2(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 (__fastcall *v5)(__int64); // x3
  __int64 v6; // x0
  __int64 (__fastcall *v8)(__int64, __int64, _QWORD *); // x3
  __int64 v9; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = (__int64 (__fastcall *)(__int64))a1[29];
  if ( v5 )
  {
    v6 = a1[68];
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v5(v6);
  }
  else
  {
    v8 = (__int64 (__fastcall *)(__int64, __int64, _QWORD *))a1[65];
    if ( v8 )
    {
      if ( a2 )
      {
        a2 = uarpTagStructPack32(a2);
        v8 = (__int64 (__fastcall *)(__int64, __int64, _QWORD *))a1[65];
      }
      v9 = a1[68];
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return v8(v9, a2, a3);
    }
    else
    {
      *a3 = -1LL;
      a3[1] = -1LL;
      return 0LL;
    }
  }
}