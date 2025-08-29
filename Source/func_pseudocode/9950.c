__ZN3TSP16DocumentMetadataD2Ev
void __fastcall TSP::DocumentMetadata::~DocumentMetadata(TSP::DocumentMetadata *this)
{
  TSP::DataPropertiesV1 *v2; // x0
  __int64 v3; // x0

  if ( this != (TSP::DocumentMetadata *)&TSP::_DocumentMetadata_default_instance_ )
  {
    v2 = (TSP::DataPropertiesV1 *)*((_QWORD *)this + 3);
    if ( v2 )
    {
      TSP::DataPropertiesV1::~DataPropertiesV1(v2);
      operator delete(v3, 0x10A1C40290C9B23LL);
    }
  }
  sub_100037E58((char *)this + 8);
}