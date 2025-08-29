__ZN3TSP14EncryptionInfoD0Ev
void __fastcall TSP::EncryptionInfo::~EncryptionInfo(TSP::EncryptionInfo *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  TSP::EncryptionInfo::~EncryptionInfo(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x10A1C40D83B66D4LL);
}