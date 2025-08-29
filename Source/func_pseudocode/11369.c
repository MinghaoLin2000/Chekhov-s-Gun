__ZNK6google8protobuf28GeneratedCodeInfo_Annotation12ByteSizeLongEv
__int64 __fastcall google::protobuf::GeneratedCodeInfo_Annotation::ByteSizeLong(
        google::protobuf::GeneratedCodeInfo_Annotation *this)
{
  __int64 v2; // x0
  int v3; // w8
  __int64 v4; // x9
  __int64 v5; // x1
  int v6; // w8
  unsigned __int64 v7; // x9
  __int64 v8; // x10
  __int64 v9; // x9
  int v10; // w9
  __int64 v11; // x9
  int v12; // w8
  __int64 v13; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = google::protobuf::internal::WireFormatLite::Int32Size((char *)this + 24);
  if ( v2 )
  {
    v3 = v2;
    if ( (v2 & 0x80000000) != 0 )
      v4 = 11LL;
    else
      v4 = ((9 * (__clz(v2 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v3 = 0;
    v4 = 0LL;
  }
  *((_DWORD *)this + 10) = v3;
  v5 = v4 + v2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 7) != 0 )
  {
    if ( (v6 & 1) != 0 )
    {
      v7 = *((_QWORD *)this + 6) & 0xFFFFFFFFFFFFFFFELL;
      v8 = *(unsigned __int8 *)(v7 + 23);
      v9 = *(_QWORD *)(v7 + 8);
      if ( (v8 & 0x80u) == 0LL )
        v9 = v8;
      v5 += v9 + ((9 * (__clz(v9 | 1) ^ 0x1F) + 73) >> 6) + 1;
      if ( (v6 & 2) == 0 )
      {
LABEL_9:
        if ( (v6 & 4) == 0 )
          goto LABEL_22;
LABEL_18:
        v12 = *((_DWORD *)this + 15);
        if ( v12 < 0 )
          v13 = 11LL;
        else
          v13 = ((9 * (__clz(v12 | 1) ^ 0x1F) + 73) >> 6) + 1;
        v5 += v13;
        goto LABEL_22;
      }
    }
    else if ( (v6 & 2) == 0 )
    {
      goto LABEL_9;
    }
    v10 = *((_DWORD *)this + 14);
    if ( v10 < 0 )
      v11 = 11LL;
    else
      v11 = ((9 * (__clz(v10 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v5 += v11;
    if ( (v6 & 4) == 0 )
      goto LABEL_22;
    goto LABEL_18;
  }
LABEL_22:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v5, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v5;
    return v5;
  }
}