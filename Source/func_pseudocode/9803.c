__ZN3TSP36DataMetadataMap_DataMetadataMapEntryD0Ev
void __fastcall TSP::DataMetadataMap_DataMetadataMapEntry::~DataMetadataMap_DataMetadataMapEntry(
        TSP::DataMetadataMap_DataMetadataMapEntry *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  TSP::DataMetadataMap_DataMetadataMapEntry::~DataMetadataMap_DataMetadataMapEntry(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x10A1C406130BDD3LL);
}