__ZN3TSP18PasteboardMetadataD2Ev
void __fastcall TSP::PasteboardMetadata::~PasteboardMetadata(TSP::PasteboardMetadata *this)
{
  __int64 v2; // x20
  TSP::UUID *v3; // x0
  __int64 v4; // x0
  TSP::Reference *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  void *v8; // x0
  __int64 v9; // t1
  __int64 v10; // x0
  void *v11; // x0
  __int64 v12; // t1

  v2 = *((_QWORD *)this + 12);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  if ( this != (TSP::PasteboardMetadata *)&TSP::_PasteboardMetadata_default_instance_ )
  {
    v3 = (TSP::UUID *)*((_QWORD *)this + 13);
    if ( v3 )
    {
      TSP::UUID::~UUID(v3);
      operator delete(v4, 0x1081C40825B58B5LL);
    }
    v5 = (TSP::Reference *)*((_QWORD *)this + 14);
    if ( v5 )
    {
      TSP::Reference::~Reference(v5);
      operator delete(v6, 0x1081C407D3F2757LL);
    }
  }
  sub_100037E58((char *)this + 8);
  if ( *((int *)this + 19) >= 1 )
  {
    v7 = *((_QWORD *)this + 10);
    v9 = *(_QWORD *)(v7 - 8);
    v8 = (void *)(v7 - 8);
    if ( !v9 )
      operator delete(v8);
  }
  sub_100055068((char *)this + 48);
  if ( *((int *)this + 7) >= 1 )
  {
    v10 = *((_QWORD *)this + 4);
    v12 = *(_QWORD *)(v10 - 8);
    v11 = (void *)(v10 - 8);
    if ( !v12 )
      operator delete(v11);
  }
}