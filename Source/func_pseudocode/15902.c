_uarpPlatformDataTransferResume
__int64 __fastcall uarpPlatformDataTransferResume(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  __int64 result; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = *(_QWORD *)(a1 + 568);
  if ( v4 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v4 + 304) && *(_QWORD *)(v4 + 696) == a2 )
      {
        result = uarpPlatformAssetRequestData(a1, v4, v4 + 312);
        if ( (_DWORD)result )
          break;
      }
      v4 = *(_QWORD *)(v4 + 712);
      if ( !v4 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return UARPLayer2DataTransferResume(a1, a2);
  }
  return result;
}