__ZN6google8protobuf3ApiD2Ev
void __fastcall google::protobuf::Api::~Api(google::protobuf::Api *this)
{
  __int64 v2; // x20
  __int64 v3; // x20
  google::protobuf::SourceContext *v4; // x0
  __int64 v5; // x0

  v2 = *((_QWORD *)this + 11);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  v3 = *((_QWORD *)this + 12);
  if ( (__int64 *)v3 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v3 + 23) < 0 )
      operator delete(*(void **)v3);
    operator delete(v3, 0x1012C40EC159624LL);
  }
  if ( this != (google::protobuf::Api *)&google::protobuf::_Api_default_instance_ )
  {
    v4 = (google::protobuf::SourceContext *)*((_QWORD *)this + 13);
    if ( v4 )
    {
      google::protobuf::SourceContext::~SourceContext(v4);
      operator delete(v5, 0x1081C40AA79BA9DLL);
    }
  }
  sub_100037E58((char *)this + 8);
  sub_1000CC240((char *)this + 64);
  sub_1000CC1C0((char *)this + 40);
  sub_1000CC140((char *)this + 16);
}