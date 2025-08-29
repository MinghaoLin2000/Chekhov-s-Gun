__ZN3TSP14LargeUUIDArrayD0Ev
void __fastcall TSP::LargeUUIDArray::~LargeUUIDArray(TSP::LargeUUIDArray *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  TSP::LargeUUIDArray::~LargeUUIDArray(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x10A1C40D4912B22LL);
}