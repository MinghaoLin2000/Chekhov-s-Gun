__ZN3TSP36DataMetadataMap_DataMetadataMapEntryD2Ev
void __fastcall TSP::DataMetadataMap_DataMetadataMapEntry::~DataMetadataMap_DataMetadataMapEntry(
        TSP::DataMetadataMap_DataMetadataMapEntry *this)
{
  TSP::Reference *v2; // x0
  __int64 v3; // x0

  if ( this != (TSP::DataMetadataMap_DataMetadataMapEntry *)&TSP::_DataMetadataMap_DataMetadataMapEntry_default_instance_ )
  {
    v2 = (TSP::Reference *)*((_QWORD *)this + 3);
    if ( v2 )
    {
      TSP::Reference::~Reference(v2);
      operator delete(v3, 0x1081C407D3F2757LL);
    }
  }
  sub_100037E58((char *)this + 8);
}