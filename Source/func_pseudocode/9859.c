__ZNK3TSP19EncryptionBlockInfo12ByteSizeLongEv
unsigned __int64 __fastcall TSP::EncryptionBlockInfo::ByteSizeLong(TSP::EncryptionBlockInfo *this)
{
  int v1; // w8
  unsigned __int64 v2; // x1

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 1) != 0 )
  {
    v2 = ((9 * (__clz(*((_QWORD *)this + 3) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
    if ( (v1 & 2) == 0 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v2 = 0LL;
  if ( (v1 & 2) != 0 )
LABEL_5:
    v2 += ((9 * (__clz(*((_QWORD *)this + 4) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
LABEL_6:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v2, (char *)this + 20);
  *((_DWORD *)this + 5) = v2;
  return v2;
}