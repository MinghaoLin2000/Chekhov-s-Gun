__ZN3TSP21DataPropertiesEntryV1D0Ev
void __fastcall TSP::DataPropertiesEntryV1::~DataPropertiesEntryV1(TSP::DataPropertiesEntryV1 *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  TSP::DataPropertiesEntryV1::~DataPropertiesEntryV1(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x1081C4041940EB8LL);
}