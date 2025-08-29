_uarpPlatformEndpointOfferAsset
__int64 __fastcall uarpPlatformEndpointOfferAsset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // x0
  __int64 v6; // x21
  _OWORD __dst[3]; // [xsp+10h] [xbp-50h] BYREF

  result = 30LL;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        v6 = *(_QWORD *)(a1 + 568);
        if ( v6 )
        {
          while ( *(_DWORD *)(v6 + 304) != 1 || *(_QWORD *)(v6 + 704) != a3 )
          {
            v6 = *(_QWORD *)(v6 + 712);
            if ( !v6 )
              return 30LL;
          }
          memset(__dst, 0, 44);
          result = uarpPlatformEndpointAssetGetBytesAtOffset(a1, a2, v6, __dst);
          if ( !(_DWORD)result )
          {
            uarpSuperBinaryHeaderEndianSwap((unsigned int *)__dst, (_DWORD *)v6);
            *(_OWORD *)(v6 + 52) = *(_OWORD *)(v6 + 12);
            *(_DWORD *)(v6 + 68) = *(_DWORD *)(v6 + 8);
            *(_DWORD *)(v6 + 448) = *(unsigned __int16 *)(v6 + 40) / 0x28u;
            result = uarpPlatformAssetApproveOfferVersion(a2, v6);
            if ( !(_DWORD)result )
              return uarpOfferAssetToRemoteEP(a1, a2, v6);
          }
        }
      }
    }
  }
  return result;
}