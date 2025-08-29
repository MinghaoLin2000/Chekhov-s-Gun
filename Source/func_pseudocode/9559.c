__ZN3TSP19DatabaseDataArchiveD0Ev
void __fastcall TSP::DatabaseDataArchive::~DatabaseDataArchive(TSP::DatabaseDataArchive *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  TSP::DatabaseDataArchive::~DatabaseDataArchive(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x10A1C40F9A64509LL);
}