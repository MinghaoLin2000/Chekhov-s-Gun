__ZNK3TSP43SupportMetadata_DataCollaborationProperties12ByteSizeLongEv
__int64 __fastcall TSP::SupportMetadata_DataCollaborationProperties::ByteSizeLong(
        TSP::SupportMetadata_DataCollaborationProperties *this)
{
  int v1; // w8
  __int64 v2; // x1
  unsigned __int64 v3; // x9
  __int64 v4; // x10
  __int64 v5; // x9
  __int64 v6; // x9
  int v7; // w8
  __int64 v8; // x10
  __int64 v9; // x8
  int v11; // w9
  __int64 v12; // x11
  __int64 v13; // x9
  int v14; // w9
  __int64 v15; // x11
  __int64 v16; // x9

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 1) != 0 )
  {
    v3 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
    v4 = *(unsigned __int8 *)(v3 + 23);
    v5 = *(_QWORD *)(v3 + 8);
    if ( (v4 & 0x80u) == 0LL )
      v5 = v4;
    v2 = v5 + ((9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v2 = 0LL;
  }
  if ( (v1 & 0x7E) != 0 )
  {
    v6 = v2 + 2;
    if ( (v1 & 2) == 0 )
      v6 = v2;
    if ( (v1 & 4) != 0 )
      v6 += 2LL;
    if ( (v1 & 8) != 0 )
      v2 = v6 + 2;
    else
      v2 = v6;
    if ( (v1 & 0x10) != 0 )
    {
      v11 = *((_DWORD *)this + 9);
      v12 = ((9 * (__clz(v11 | 1) ^ 0x1F) + 73) >> 6) + 1;
      if ( v11 >= 0 )
        v13 = v12;
      else
        v13 = 11LL;
      v2 += v13;
      if ( (v1 & 0x20) == 0 )
      {
LABEL_16:
        if ( (v1 & 0x40) == 0 )
          goto LABEL_21;
        goto LABEL_17;
      }
    }
    else if ( (v1 & 0x20) == 0 )
    {
      goto LABEL_16;
    }
    v14 = *((_DWORD *)this + 10);
    v15 = ((9 * (__clz(v14 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( v14 >= 0 )
      v16 = v15;
    else
      v16 = 11LL;
    v2 += v16;
    if ( (v1 & 0x40) != 0 )
    {
LABEL_17:
      v7 = *((_DWORD *)this + 11);
      v8 = ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6) + 1;
      if ( v7 >= 0 )
        v9 = v8;
      else
        v9 = 11LL;
      v2 += v9;
    }
  }
LABEL_21:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v2, (char *)this + 20);
  *((_DWORD *)this + 5) = v2;
  return v2;
}