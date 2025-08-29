__ZNK6google8protobuf13SourceContext12ByteSizeLongEv
char *__fastcall google::protobuf::SourceContext::ByteSizeLong(google::protobuf::SourceContext *this)
{
  unsigned __int64 v1; // x8
  __int64 v2; // x9
  __int64 v3; // x8
  const google::protobuf::UnknownFieldSet *v4; // x1

  v1 = *((_QWORD *)this + 2) & 0xFFFFFFFFFFFFFFFELL;
  v2 = *(unsigned __int8 *)(v1 + 23);
  if ( *(char *)(v1 + 23) < 0 )
  {
    if ( *(_QWORD *)(v1 + 8) )
      goto LABEL_3;
LABEL_7:
    v4 = 0LL;
    goto LABEL_8;
  }
  if ( !*(_BYTE *)(v1 + 23) )
    goto LABEL_7;
LABEL_3:
  v3 = *(_QWORD *)(v1 + 8);
  if ( (v2 & 0x80u) == 0LL )
    v3 = v2;
  v4 = (const google::protobuf::UnknownFieldSet *)(v3 + ((9 * (__clz(v3 | 1) ^ 0x1F) + 73) >> 6) + 1);
LABEL_8:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize(
             (google::protobuf::SourceContext *)((char *)this + 8),
             v4,
             (_DWORD *)this + 6);
  *((_DWORD *)this + 6) = (_DWORD)v4;
  return (char *)v4;
}