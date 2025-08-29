_uarpAllocateTransmitBuffer2
_QWORD *__fastcall uarpAllocateTransmitBuffer2(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // w8
  _QWORD *result; // x0
  unsigned int v8; // w8
  unsigned int v9; // w8
  __int64 v10; // x10
  unsigned int v11; // [xsp+4h] [xbp-2Ch] BYREF
  void *v12; // [xsp+8h] [xbp-28h] BYREF

  v12 = 0LL;
  v6 = UARPLayer2RequestBuffer(a1, (__int64 *)&v12, 0x28u);
  result = 0LL;
  if ( !v6 )
  {
    v8 = *(_DWORD *)a2 + *(unsigned __int16 *)(a2 + 30) + 26;
    if ( v8 <= a3 )
      v8 = a3;
    v11 = v8;
    if ( (unsigned int)UARPLayer2RequestTransmitMsgBuffer(a1, a2, (__int64 *)v12, &v11) )
    {
      UARPLayer2ReturnBuffer(a1, v12);
      return 0LL;
    }
    else
    {
      v9 = v11;
      result = v12;
      *((_DWORD *)v12 + 2) = v11;
      v10 = *(unsigned __int16 *)(a2 + 30);
      result[2] = *result + v10;
      *((_DWORD *)result + 6) = v9 - v10;
      *((_WORD *)result + 14) = 0;
    }
  }
  return result;
}