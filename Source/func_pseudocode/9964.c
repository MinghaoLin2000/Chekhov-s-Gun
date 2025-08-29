__ZN3TSP43SupportMetadata_DataCollaborationPropertiesD2Ev
void __fastcall TSP::SupportMetadata_DataCollaborationProperties::~SupportMetadata_DataCollaborationProperties(
        TSP::SupportMetadata_DataCollaborationProperties *this)
{
  __int64 v2; // x20

  v2 = *((_QWORD *)this + 3);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  sub_100037E58((char *)this + 8);
}