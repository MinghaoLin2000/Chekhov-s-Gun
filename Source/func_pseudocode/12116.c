__ZN6google8protobuf6Option5ClearEv
google::protobuf::Any *__fastcall google::protobuf::Option::Clear(google::protobuf::Option *this)
{
  google::protobuf::Any *result; // x0
  __int64 v3; // x10
  __int64 v4; // x8
  _QWORD *v5; // x9
  __int64 v6; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = (google::protobuf::Any *)google::protobuf::internal::ArenaStringPtr::ClearToEmpty((google::protobuf::Option *)((char *)this + 16));
  v3 = *((_QWORD *)this + 1);
  v4 = v3 & 1;
  v5 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v3 & 1) != 0 )
  {
    if ( *v5 )
      goto LABEL_5;
  }
  else if ( v5 )
  {
    goto LABEL_5;
  }
  result = (google::protobuf::Any *)*((_QWORD *)this + 3);
  if ( result )
  {
    google::protobuf::Any::~Any(result);
    result = (google::protobuf::Any *)operator delete(v6, 0x10A1C400831BD41LL);
    v4 = *((_QWORD *)this + 1) & 1LL;
  }
LABEL_5:
  *((_QWORD *)this + 3) = 0LL;
  if ( v4 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::Any *)sub_10003A2A8((char *)this + 8);
  }
  return result;
}