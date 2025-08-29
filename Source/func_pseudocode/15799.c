_uarpPlatformAssetPullAllPayloadHeaders
__int64 __fastcall uarpPlatformAssetPullAllPayloadHeaders(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v5; // w21
  __int64 v6; // x9
  __int64 v7; // [xsp+8h] [xbp-28h] BYREF

  result = 30LL;
  if ( a1 && a2 )
  {
    if ( *(_BYTE *)(a2 + 392) == 1 )
    {
      return 16LL;
    }
    else
    {
      v7 = 0LL;
      if ( *(int *)(a2 + 448) < 1 )
      {
LABEL_9:
        uarpZero((void *)(a2 + 312), 0x88uLL);
        *(_QWORD *)(a2 + 312) = *(_QWORD *)(a2 + 36);
        *(_QWORD *)(a2 + 328) = *(_QWORD *)(a2 + 640);
        *(_DWORD *)(a2 + 336) = *(_DWORD *)(a2 + 648);
        *(_QWORD *)(a2 + 376) = sub_10000D6F8;
        *(_QWORD *)(a2 + 384) = j__uarpPlatformAssetPullAllMetaData;
        return uarpPlatformAssetRequestData(a1, a2, a2 + 312);
      }
      else
      {
        v5 = 0;
        while ( 1 )
        {
          result = UARPLayer2RequestBuffer(a1, &v7, 184LL);
          if ( (_DWORD)result )
            break;
          v6 = v7;
          *(_QWORD *)(v7 + 176) = *(_QWORD *)(a2 + 632);
          *(_QWORD *)(a2 + 632) = v6;
          if ( ++v5 >= *(_DWORD *)(a2 + 448) )
            goto LABEL_9;
        }
      }
    }
  }
  return result;
}