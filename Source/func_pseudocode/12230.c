__ZN6google8protobuf8internal10WireFormat33ComputeUnknownMessageSetItemsSizeERKNS0_15UnknownFieldSetE
__int64 __fastcall google::protobuf::internal::WireFormat::ComputeUnknownMessageSetItemsSize(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::UnknownFieldSet *a2)
{
  __int64 v2; // x10
  unsigned __int64 v3; // x9
  __int64 result; // x0
  __int64 v5; // x9
  __int64 v6; // x10
  __int64 v7; // x11

  v2 = *(_QWORD *)this;
  v3 = *((_QWORD *)this + 1) - *(_QWORD *)this;
  if ( (int)(v3 >> 4) < 1 )
    return 0LL;
  result = 0LL;
  v5 = (unsigned int)(v3 >> 4);
  v6 = v2 + 8;
  do
  {
    if ( *(_DWORD *)(v6 - 4) == 3 )
    {
      if ( *(char *)(*(_QWORD *)v6 + 23LL) < 0 )
        v7 = *(_QWORD *)(*(_QWORD *)v6 + 8LL);
      else
        LODWORD(v7) = *(unsigned __int8 *)(*(_QWORD *)v6 + 23LL);
      result += 4LL
              + ((9 * (__clz(*(_DWORD *)(v6 - 8) | 1) ^ 0x1F) + 73) >> 6)
              + (int)v7
              + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6);
    }
    v6 += 16LL;
    --v5;
  }
  while ( v5 );
  return result;
}