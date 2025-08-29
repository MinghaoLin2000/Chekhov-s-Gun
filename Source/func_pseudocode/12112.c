__ZN6google8protobuf6OptionD2Ev
void __fastcall google::protobuf::Option::~Option(google::protobuf::Option *this)
{
  __int64 v2; // x20
  google::protobuf::Any *v3; // x0
  __int64 v4; // x0

  v2 = *((_QWORD *)this + 2);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  if ( this != (google::protobuf::Option *)&google::protobuf::_Option_default_instance_ )
  {
    v3 = (google::protobuf::Any *)*((_QWORD *)this + 3);
    if ( v3 )
    {
      google::protobuf::Any::~Any(v3);
      operator delete(v4, 0x10A1C400831BD41LL);
    }
  }
  sub_100037E58((char *)this + 8);
}