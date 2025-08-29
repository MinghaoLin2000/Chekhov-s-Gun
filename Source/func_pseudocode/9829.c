__ZN3TSP12DataMetadataD2Ev
void __fastcall TSP::DataMetadata::~DataMetadata(TSP::DataMetadata *this)
{
  TSP::Color *v2; // x0
  __int64 v3; // x0

  if ( this != (TSP::DataMetadata *)&TSP::_DataMetadata_default_instance_ )
  {
    v2 = (TSP::Color *)*((_QWORD *)this + 3);
    if ( v2 )
    {
      TSP::Color::~Color(v2);
      operator delete(v3, 0x1081C40654DEE2BLL);
    }
  }
  sub_100037E58((char *)this + 8);
}