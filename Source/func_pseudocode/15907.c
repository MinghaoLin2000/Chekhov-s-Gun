_uarpSolicitDynamicAsset
__int64 __fastcall uarpSolicitDynamicAsset(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = uarpAllocPrepareTransmitBuffer2(a1, a2, 17LL, 10LL, 1LL);
  if ( !v6 )
    return 11LL;
  *(_DWORD *)(*(_QWORD *)(v6 + 16) + 6LL) = *a3;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpTransmitBuffer2(a1, a2, v6);
}