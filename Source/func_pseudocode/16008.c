_UARPSuperBinaryAddPayloadDataLarge
__int64 __fastcall UARPSuperBinaryAddPayloadDataLarge(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v10; // w25
  __int64 v11; // x24
  __int64 result; // x0

  v10 = 0;
  while ( a5 )
  {
    if ( a5 >= 0xFFFF )
      v11 = 0xFFFFLL;
    else
      v11 = a5;
    result = UARPSuperBinaryAddPayloadData(a1, a2, a3, a4 + v10, v11);
    v10 += v11;
    a5 -= v11;
    if ( (_DWORD)result )
      return result;
  }
  return 0LL;
}