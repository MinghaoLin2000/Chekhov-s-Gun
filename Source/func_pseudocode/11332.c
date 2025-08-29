__ZN6google8protobuf23SourceCodeInfo_LocationD2Ev
void __fastcall google::protobuf::SourceCodeInfo_Location::~SourceCodeInfo_Location(
        google::protobuf::SourceCodeInfo_Location *this)
{
  __int64 v2; // x20
  __int64 v3; // x20
  __int64 v4; // x0
  void *v5; // x0
  __int64 v6; // t1
  __int64 v7; // x0
  void *v8; // x0
  __int64 v9; // t1

  v2 = *((_QWORD *)this + 12);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  v3 = *((_QWORD *)this + 13);
  if ( (__int64 *)v3 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v3 + 23) < 0 )
      operator delete(*(void **)v3);
    operator delete(v3, 0x1012C40EC159624LL);
  }
  sub_100037E58((char *)this + 8);
  sub_1000B8A24((char *)this + 72);
  if ( *((int *)this + 13) >= 1 )
  {
    v4 = *((_QWORD *)this + 7);
    v6 = *(_QWORD *)(v4 - 8);
    v5 = (void *)(v4 - 8);
    if ( !v6 )
      operator delete(v5);
  }
  if ( *((int *)this + 7) >= 1 )
  {
    v7 = *((_QWORD *)this + 4);
    v9 = *(_QWORD *)(v7 - 8);
    v8 = (void *)(v7 - 8);
    if ( !v9 )
      operator delete(v8);
  }
}