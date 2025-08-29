__ZN3TSP13ComponentInfoD0Ev
void __fastcall TSP::ComponentInfo::~ComponentInfo(TSP::ComponentInfo *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  TSP::ComponentInfo::~ComponentInfo(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x10A1C402CD0F650LL);
}