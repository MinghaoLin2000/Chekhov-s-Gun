__ZN6google8protobuf19UninterpretedOptionD2Ev
void __fastcall google::protobuf::UninterpretedOption::~UninterpretedOption(
        google::protobuf::UninterpretedOption *this)
{
  __int64 v2; // x20
  __int64 v3; // x20
  __int64 v4; // x20

  v2 = *((_QWORD *)this + 6);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  v3 = *((_QWORD *)this + 7);
  if ( (__int64 *)v3 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v3 + 23) < 0 )
      operator delete(*(void **)v3);
    operator delete(v3, 0x1012C40EC159624LL);
  }
  v4 = *((_QWORD *)this + 8);
  if ( (__int64 *)v4 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v4 + 23) < 0 )
      operator delete(*(void **)v4);
    operator delete(v4, 0x1012C40EC159624LL);
  }
  sub_100037E58((char *)this + 8);
  sub_1000B9820((char *)this + 24);
}