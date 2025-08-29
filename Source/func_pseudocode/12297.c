__ZN6google8protobuf8internal14WireFormatLite9Int32SizeERKNS0_13RepeatedFieldIiEE
__int64 __fastcall google::protobuf::internal::WireFormatLite::Int32Size(unsigned int *a1)
{
  __int64 v1; // x9
  __int64 result; // x0
  int *v4; // x8
  int v5; // w10
  int v6; // t1
  __int64 v7; // x10

  v1 = *a1;
  if ( (int)v1 < 1 )
    return 0LL;
  result = 0LL;
  v4 = (int *)*((_QWORD *)a1 + 1);
  do
  {
    v6 = *v4++;
    v5 = v6;
    if ( v6 < 0 )
      v7 = 10LL;
    else
      v7 = (9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6;
    result += v7;
    --v1;
  }
  while ( v1 );
  return result;
}