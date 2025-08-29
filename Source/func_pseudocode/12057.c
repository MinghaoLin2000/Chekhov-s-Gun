__ZN6google8protobuf4TypeD2Ev
void __fastcall google::protobuf::Type::~Type(google::protobuf::Type *this)
{
  __int64 v2; // x20
  google::protobuf::SourceContext *v3; // x0
  __int64 v4; // x0

  v2 = *((_QWORD *)this + 11);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  if ( this != (google::protobuf::Type *)&google::protobuf::_Type_default_instance_ )
  {
    v3 = (google::protobuf::SourceContext *)*((_QWORD *)this + 12);
    if ( v3 )
    {
      google::protobuf::SourceContext::~SourceContext(v3);
      operator delete(v4, 0x1081C40AA79BA9DLL);
    }
  }
  sub_100037E58((char *)this + 8);
  sub_1000CC1C0((char *)this + 64);
  sub_1000B8A24((char *)this + 40);
  sub_1000F77D8((char *)this + 16);
}