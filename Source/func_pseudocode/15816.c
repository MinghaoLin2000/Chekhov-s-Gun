_UARPLayer2ManufacturerName
__int64 __fastcall UARPLayer2ManufacturerName(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 (__fastcall *v3)(__int64); // x3
  __int64 v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = *(__int64 (__fastcall **)(__int64))(a1 + 152);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 544);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v3(v4);
  }
  else
  {
    *a3 = uarpCopyDefaultInfoString(a2, (unsigned int)*a3);
    return 0LL;
  }
}