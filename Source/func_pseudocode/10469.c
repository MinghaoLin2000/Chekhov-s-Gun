__ZNK3TSP19SparseUUIDPathArray12ByteSizeLongEv
__int64 __fastcall TSP::SparseUUIDPathArray::ByteSizeLong(TSP::SparseUUIDPathArray *this)
{
  __int64 v2; // x9
  __int64 v3; // x8
  __int64 v4; // x20
  __int64 v5; // x9
  TSP::UUIDPath ***v6; // x21
  __int64 v7; // x22
  TSP::UUIDPath **v8; // t1
  __int64 v9; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
    v2 = ((9 * (__clz(*((_DWORD *)this + 12) | 1) ^ 0x1F) + 73) >> 6) + 1;
  else
    v2 = 0LL;
  v3 = *((int *)this + 8);
  v4 = v2 + v3;
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
    v6 = (TSP::UUIDPath ***)(v5 + 8);
  else
    v6 = 0LL;
  if ( (_DWORD)v3 )
  {
    v7 = 8 * v3;
    do
    {
      v8 = *v6++;
      v9 = TSP::SparseUUIDPathArray_Entry::ByteSizeLong(v8);
      v4 += v9 + ((9 * (__clz(v9 | 1) ^ 0x1F) + 73) >> 6);
      v7 -= 8LL;
    }
    while ( v7 );
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v4, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v4;
    return v4;
  }
}