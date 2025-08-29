__ZNK6google8protobuf9ListValue12ByteSizeLongEv
char *__fastcall google::protobuf::ListValue::ByteSizeLong(google::protobuf::ListValue *this)
{
  const google::protobuf::UnknownFieldSet *v2; // x20
  __int64 v3; // x8
  google::protobuf::Value **v4; // x21
  __int64 v5; // x22
  google::protobuf::Value *v6; // t1
  char *v7; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = (const google::protobuf::UnknownFieldSet *)*((int *)this + 6);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    v4 = (google::protobuf::Value **)(v3 + 8);
  else
    v4 = 0LL;
  if ( (_DWORD)v2 )
  {
    v5 = 8LL * (_QWORD)v2;
    do
    {
      v6 = *v4++;
      v7 = google::protobuf::Value::ByteSizeLong(v6);
      v2 = (const google::protobuf::UnknownFieldSet *)((char *)v2
                                                     + (_QWORD)v7
                                                     + ((9 * (__clz((unsigned int)v7 | 1) ^ 0x1F) + 73) >> 6));
      v5 -= 8LL;
    }
    while ( v5 );
  }
  else
  {
    v2 = 0LL;
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize(
             (google::protobuf::ListValue *)((char *)this + 8),
             v2,
             (_DWORD *)this + 10);
  }
  else
  {
    *((_DWORD *)this + 10) = (_DWORD)v2;
    return (char *)v2;
  }
}