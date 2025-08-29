__ZN3TSP20LargeLazyObjectArray5ClearEv
__int64 __fastcall TSP::LargeLazyObjectArray::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x19
  char v3; // t1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = this;
  if ( (*(_BYTE *)(this + 16) & 1) != 0 )
    this = TSP::LargeArray::Clear(*(_QWORD *)(this + 24));
  v3 = *(_BYTE *)(v1 + 8);
  v2 = v1 + 8;
  *(_DWORD *)(v2 + 8) = 0;
  if ( (v3 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v2);
  }
  return this;
}