__ZN3TSP4Rect5ClearEv
__int64 __fastcall TSP::Rect::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w20
  __int64 v3; // x19
  char v4; // t1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = this;
  v2 = *(_DWORD *)(this + 16);
  if ( (v2 & 3) != 0 )
  {
    if ( (v2 & 1) != 0 )
      this = TSP::Point::Clear(*(TSP::Point **)(this + 24));
    if ( (v2 & 2) != 0 )
      this = TSP::Size::Clear(*(TSP::Size **)(v1 + 32));
  }
  v4 = *(_BYTE *)(v1 + 8);
  v3 = v1 + 8;
  *(_DWORD *)(v3 + 8) = 0;
  if ( (v4 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v3);
  }
  return this;
}