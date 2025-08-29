__ZN6google8protobuf3Api5ClearEv
google::protobuf::SourceContext *__fastcall google::protobuf::Api::Clear(google::protobuf::Api *this)
{
  __int64 v2; // x20
  google::protobuf::Method **v3; // x21
  google::protobuf::Method *v4; // t1
  __int64 v5; // x20
  google::protobuf::Option **v6; // x21
  google::protobuf::Option *v7; // t1
  __int64 v8; // x20
  google::protobuf::Mixin **v9; // x21
  google::protobuf::Mixin *v10; // t1
  google::protobuf::SourceContext *result; // x0
  __int64 v12; // x10
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((unsigned int *)this + 6);
  if ( (int)v2 >= 1 )
  {
    v3 = (google::protobuf::Method **)(*((_QWORD *)this + 4) + 8LL);
    do
    {
      v4 = *v3++;
      google::protobuf::Method::Clear(v4);
      --v2;
    }
    while ( v2 );
    *((_DWORD *)this + 6) = 0;
  }
  v5 = *((unsigned int *)this + 12);
  if ( (int)v5 >= 1 )
  {
    v6 = (google::protobuf::Option **)(*((_QWORD *)this + 7) + 8LL);
    do
    {
      v7 = *v6++;
      google::protobuf::Option::Clear(v7);
      --v5;
    }
    while ( v5 );
    *((_DWORD *)this + 12) = 0;
  }
  v8 = *((unsigned int *)this + 18);
  if ( (int)v8 >= 1 )
  {
    v9 = (google::protobuf::Mixin **)(*((_QWORD *)this + 10) + 8LL);
    do
    {
      v10 = *v9++;
      google::protobuf::Mixin::Clear(v10);
      --v8;
    }
    while ( v8 );
    *((_DWORD *)this + 18) = 0;
  }
  google::protobuf::internal::ArenaStringPtr::ClearToEmpty((google::protobuf::Api *)((char *)this + 88));
  result = (google::protobuf::SourceContext *)google::protobuf::internal::ArenaStringPtr::ClearToEmpty((google::protobuf::Api *)((char *)this + 96));
  v12 = *((_QWORD *)this + 1);
  v13 = v12 & 1;
  v14 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v12 & 1) != 0 )
  {
    if ( *v14 )
      goto LABEL_17;
  }
  else if ( v14 )
  {
    goto LABEL_17;
  }
  result = (google::protobuf::SourceContext *)*((_QWORD *)this + 13);
  if ( result )
  {
    google::protobuf::SourceContext::~SourceContext(result);
    result = (google::protobuf::SourceContext *)operator delete(v15, 0x1081C40AA79BA9DLL);
    v13 = *((_QWORD *)this + 1) & 1LL;
  }
LABEL_17:
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  if ( v13 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::SourceContext *)sub_10003A2A8((char *)this + 8);
  }
  return result;
}