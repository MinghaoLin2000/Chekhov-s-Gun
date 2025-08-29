__ZN3TSP21DataPropertiesEntryV1D2Ev
void __fastcall TSP::DataPropertiesEntryV1::~DataPropertiesEntryV1(TSP::DataPropertiesEntryV1 *this)
{
  __int64 v2; // x20
  __int64 v3; // x20
  __int64 v4; // x0
  void *v5; // x0
  __int64 v6; // t1

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
  sub_100037E58((char *)this + 8);
  if ( *((int *)this + 7) >= 1 )
  {
    v4 = *((_QWORD *)this + 4);
    v6 = *(_QWORD *)(v4 - 8);
    v5 = (void *)(v4 - 8);
    if ( !v6 )
      operator delete(v5);
  }
}