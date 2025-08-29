__ZNK6google8protobuf9FieldMask12ByteSizeLongEv
__int64 __fastcall google::protobuf::FieldMask::ByteSizeLong(google::protobuf::FieldMask *this)
{
  __int64 v1; // x8
  __int64 *v2; // x9
  __int64 v3; // x1
  __int64 v4; // t1
  __int64 v5; // x11
  __int64 v6; // x10

  v1 = *((unsigned int *)this + 6);
  if ( (int)v1 < 1 )
  {
    v3 = *((unsigned int *)this + 6);
  }
  else
  {
    v2 = (__int64 *)(*((_QWORD *)this + 4) + 8LL);
    v3 = *((unsigned int *)this + 6);
    do
    {
      v4 = *v2++;
      v5 = *(unsigned __int8 *)(v4 + 23);
      v6 = *(_QWORD *)(v4 + 8);
      if ( (v5 & 0x80u) == 0LL )
        v6 = v5;
      v3 += v6 + ((9 * (__clz(v6 | 1) ^ 0x1F) + 73) >> 6);
      --v1;
    }
    while ( v1 );
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v3, (char *)this + 40);
  *((_DWORD *)this + 10) = v3;
  return v3;
}