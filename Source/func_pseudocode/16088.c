_uarpPlatformRemoteDelegateForAssetDelegate
__int64 __fastcall uarpPlatformRemoteDelegateForAssetDelegate(__int64 result)
{
  __int64 v1; // x8

  if ( result )
  {
    v1 = *(_QWORD *)(result + 696);
    if ( v1 )
      return *(_QWORD *)(v1 + 40);
    else
      return 0LL;
  }
  return result;
}