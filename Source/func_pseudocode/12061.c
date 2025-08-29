__ZN6google8protobuf4Type5ClearEv
google::protobuf::SourceContext *__fastcall google::protobuf::Type::Clear(google::protobuf::Type *this)
{
  __int64 v2; // x20
  google::protobuf::Field **v3; // x21
  google::protobuf::Field *v4; // t1
  __int64 v5; // x20
  google::protobuf::Option **v6; // x21
  google::protobuf::Option *v7; // t1
  google::protobuf::SourceContext *result; // x0
  __int64 v9; // x10
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 v12; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((unsigned int *)this + 6);
  if ( (int)v2 >= 1 )
  {
    v3 = (google::protobuf::Field **)(*((_QWORD *)this + 4) + 8LL);
    do
    {
      v4 = *v3++;
      google::protobuf::Field::Clear(v4);
      --v2;
    }
    while ( v2 );
    *((_DWORD *)this + 6) = 0;
  }
  sub_1000B8898((char *)this + 40);
  v5 = *((unsigned int *)this + 18);
  if ( (int)v5 >= 1 )
  {
    v6 = (google::protobuf::Option **)(*((_QWORD *)this + 10) + 8LL);
    do
    {
      v7 = *v6++;
      google::protobuf::Option::Clear(v7);
      --v5;
    }
    while ( v5 );
    *((_DWORD *)this + 18) = 0;
  }
  result = (google::protobuf::SourceContext *)google::protobuf::internal::ArenaStringPtr::ClearToEmpty((google::protobuf::Type *)((char *)this + 88));
  v9 = *((_QWORD *)this + 1);
  v10 = v9 & 1;
  v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v9 & 1) != 0 )
  {
    if ( *v11 )
      goto LABEL_13;
  }
  else if ( v11 )
  {
    goto LABEL_13;
  }
  result = (google::protobuf::SourceContext *)*((_QWORD *)this + 12);
  if ( result )
  {
    google::protobuf::SourceContext::~SourceContext(result);
    result = (google::protobuf::SourceContext *)operator delete(v12, 0x1081C40AA79BA9DLL);
    v10 = *((_QWORD *)this + 1) & 1LL;
  }
LABEL_13:
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  if ( v10 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::SourceContext *)sub_10003A2A8((char *)this + 8);
  }
  return result;
}