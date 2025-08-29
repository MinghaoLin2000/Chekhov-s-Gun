_uarpPlatformEndpointSendVendorSpecific
__int64 __fastcall uarpPlatformEndpointSendVendorSpecific(
        __int64 a1,
        __int64 a2,
        __int16 *a3,
        __int64 a4,
        const void *a5,
        unsigned int a6)
{
  if ( a1 && a2 && a3 && a5 )
    return uarpSendVendorSpecific(a1, a2, a3, a4, a5, a6);
  else
    return 30LL;
}