_uarpCallbackUpdateInformationTLV
__int64 __fastcall uarpCallbackUpdateInformationTLV(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v5; // x1
  int v6; // w8
  __int64 result; // x0
  int v8; // [xsp+Ch] [xbp-14h]

  v5 = *a3;
  v8 = a3[1];
  if ( (_DWORD)v5 != 7 )
  {
    result = uarpPlatformQueryAccessoryInfo(a1, v5, a3 + 2);
    if ( (_DWORD)result )
      return result;
    v6 = v8;
    goto LABEL_6;
  }
  if ( a3[1] >= 0x10 )
  {
    a3[2] = uarpHtonl(*(unsigned int *)(a2 + 62));
    a3[3] = uarpHtonl(*(unsigned int *)(a2 + 66));
    a3[4] = uarpHtonl(*(unsigned int *)(a2 + 70));
    a3[5] = uarpHtonl(*(unsigned int *)(a2 + 74));
    v6 = 16;
LABEL_6:
    result = 0LL;
    a3[1] = v6;
    return result;
  }
  return 39LL;
}