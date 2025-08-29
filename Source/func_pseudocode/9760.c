__ZN3TSP16DocumentRevisionD0Ev
void __fastcall TSP::DocumentRevision::~DocumentRevision(TSP::DocumentRevision *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  TSP::DocumentRevision::~DocumentRevision(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x1081C407BE7EBECLL);
}