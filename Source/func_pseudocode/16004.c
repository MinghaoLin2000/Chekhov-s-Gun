_UARPSuperBinarySetupHeader
__int64 __fastcall UARPSuperBinarySetupHeader(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4, int a5)
{
  __int64 v9; // x21
  __int64 result; // x0
  __int64 v11; // x22
  _OWORD v12[2]; // [xsp+0h] [xbp-90h] BYREF
  __int64 v13; // [xsp+20h] [xbp-70h]
  _OWORD v14[3]; // [xsp+30h] [xbp-60h] BYREF

  v9 = uarpPlatformAssetFindByAssetContextAndList(a1, a2, 1LL);
  result = 30LL;
  if ( a3 >= 2 )
  {
    if ( v9 )
    {
      memset(v14, 0, 44);
      uarpZero(v14, 0x2CuLL);
      *(_QWORD *)&v14[0] = 0x2C00000002LL;
      *(_OWORD *)((char *)v14 + 12) = *a4;
      DWORD1(v14[2]) = 44;
      DWORD2(v14[2]) = 40 * a5;
      HIDWORD(v14[1]) = 40 * a5 + 44;
      DWORD2(v14[0]) = HIDWORD(v14[1]);
      result = uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, v9, v14, 44LL, 0LL);
      if ( !(_DWORD)result )
      {
        if ( a5 )
        {
          v11 = 44LL;
          while ( 1 )
          {
            v13 = 0LL;
            memset(v12, 0, sizeof(v12));
            uarpZero(v12, 0x28uLL);
            LODWORD(v12[0]) = 40;
            result = uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, v9, v12, 40LL, v11);
            if ( (_DWORD)result )
              break;
            v11 = (unsigned int)(v11 + 40);
            if ( !--a5 )
              return 0LL;
          }
        }
        else
        {
          return 0LL;
        }
      }
    }
  }
  return result;
}