__ZN6google8protobuf3AnyD2Ev
void __fastcall google::protobuf::Any::~Any(google::protobuf::Any *this)
{
  __int64 v2; // x20
  __int64 v3; // x20

  v2 = *((_QWORD *)this + 2);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  v3 = *((_QWORD *)this + 3);
  if ( (__int64 *)v3 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v3 + 23) < 0 )
      operator delete(*(void **)v3);
    operator delete(v3, 0x1012C40EC159624LL);
  }
  sub_100037E58((char *)this + 8);
}