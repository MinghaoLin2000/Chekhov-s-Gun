_uarpRemoteEndpointIDForAsset
__int64 __fastcall uarpRemoteEndpointIDForAsset(__int64 a1)
{
  __int64 v1; // x8

  if ( a1 && (v1 = *(_QWORD *)(a1 + 696)) != 0 )
    return *(unsigned int *)(v1 + 52);
  else
    return 0xFFFFFFFFLL;
}