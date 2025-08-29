__ZN3TSP24DatabaseImageDataArchiveD0Ev
void __fastcall TSP::DatabaseImageDataArchive::~DatabaseImageDataArchive(TSP::DatabaseImageDataArchive *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  TSP::DatabaseImageDataArchive::~DatabaseImageDataArchive(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x10A1C40C05B56FCLL);
}