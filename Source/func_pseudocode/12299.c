__ZN6google8protobuf8internal14WireFormatLite10UInt64SizeERKNS0_13RepeatedFieldIyEE
__int64 __fastcall google::protobuf::internal::WireFormatLite::UInt64Size(unsigned int *a1)
{
  __int64 v1; // x9
  __int64 result; // x0
  __int64 *v4; // x8
  __int64 v5; // t1

  v1 = *a1;
  if ( (int)v1 < 1 )
    return 0LL;
  result = 0LL;
  v4 = (__int64 *)*((_QWORD *)a1 + 1);
  do
  {
    v5 = *v4++;
    result += (9 * (__clz(v5 | 1) ^ 0x3F) + 73) >> 6;
    --v1;
  }
  while ( v1 );
  return result;
}