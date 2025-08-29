__ZN3TSP19DatabaseDataArchiveD2Ev
void __fastcall TSP::DatabaseDataArchive::~DatabaseDataArchive(TSP::DatabaseDataArchive *this)
{
  __int64 v2; // x20
  __int64 v3; // x20
  TSP::Reference *v4; // x0
  __int64 v5; // x0

  v2 = *((_QWORD *)this + 3);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  v3 = *((_QWORD *)this + 4);
  if ( (__int64 *)v3 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v3 + 23) < 0 )
      operator delete(*(void **)v3);
    operator delete(v3, 0x1012C40EC159624LL);
  }
  if ( this != (TSP::DatabaseDataArchive *)&TSP::_DatabaseDataArchive_default_instance_ )
  {
    v4 = (TSP::Reference *)*((_QWORD *)this + 5);
    if ( v4 )
    {
      TSP::Reference::~Reference(v4);
      operator delete(v5, 0x1081C407D3F2757LL);
    }
  }
  sub_100037E58((char *)this + 8);
}