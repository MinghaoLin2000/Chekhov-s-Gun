__ZN3TSP12DataMetadataD0Ev
void __fastcall TSP::DataMetadata::~DataMetadata(TSP::DataMetadata *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  TSP::DataMetadata::~DataMetadata(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x10A1C40D4912B22LL);
}