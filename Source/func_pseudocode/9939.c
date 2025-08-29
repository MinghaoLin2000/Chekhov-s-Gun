__ZN3TSP16DataPropertiesV1D0Ev
void __fastcall TSP::DataPropertiesV1::~DataPropertiesV1(TSP::DataPropertiesV1 *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  TSP::DataPropertiesV1::~DataPropertiesV1(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x10A1C40290C9B23LL);
}