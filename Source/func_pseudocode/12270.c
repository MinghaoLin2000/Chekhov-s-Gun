__ZNK6google8protobuf5Value12ByteSizeLongEv
char *__fastcall google::protobuf::Value::ByteSizeLong(google::protobuf::Value *this)
{
  int v2; // w8
  __int64 v3; // x1
  unsigned __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x8
  char *v7; // x8
  char *v8; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  switch ( *((_DWORD *)this + 7) )
  {
    case 1:
      v2 = *((_DWORD *)this + 4);
      if ( v2 < 0 )
        v3 = 11LL;
      else
        v3 = ((9 * (__clz(v2 | 1) ^ 0x1F) + 73) >> 6) + 1;
      break;
    case 2:
      v3 = 9LL;
      break;
    case 3:
      v4 = *((_QWORD *)this + 2) & 0xFFFFFFFFFFFFFFFELL;
      v5 = *(unsigned __int8 *)(v4 + 23);
      v6 = *(_QWORD *)(v4 + 8);
      if ( (v5 & 0x80u) == 0LL )
        v6 = v5;
      v7 = (char *)(v6 + ((9 * (__clz(v6 | 1) ^ 0x1F) + 73) >> 6));
      goto LABEL_13;
    case 4:
      v3 = 2LL;
      break;
    case 5:
      v8 = google::protobuf::Struct::ByteSizeLong(*((google::protobuf::Struct **)this + 2));
      goto LABEL_12;
    case 6:
      v8 = (char *)google::protobuf::ListValue::ByteSizeLong(*((google::protobuf::ListValue **)this + 2));
LABEL_12:
      v7 = &v8[(9 * (__clz((unsigned int)v8 | 1) ^ 0x1F) + 73) >> 6];
LABEL_13:
      v3 = (__int64)(v7 + 1);
      break;
    default:
      v3 = 0LL;
      break;
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize(
             (google::protobuf::Value *)((char *)this + 8),
             (const google::protobuf::UnknownFieldSet *)v3,
             (_DWORD *)this + 6);
  }
  else
  {
    *((_DWORD *)this + 6) = v3;
    return (char *)v3;
  }
}