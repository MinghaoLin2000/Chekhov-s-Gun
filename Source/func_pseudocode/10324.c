__ZN3TSP13CFUUIDArchiveD0Ev
void __fastcall TSP::CFUUIDArchive::~CFUUIDArchive(TSP::CFUUIDArchive *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  TSP::CFUUIDArchive::~CFUUIDArchive(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x1081C401753DA55LL);
}