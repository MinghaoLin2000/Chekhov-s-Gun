__ZN3TSP17ViewStateMetadata5ClearEv
__int64 __fastcall TSP::ViewStateMetadata::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 *v3; // x21
  __int64 v4; // t1
  int v5; // w20
  __int64 v6; // x19
  char v7; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = this;
  *(_DWORD *)(this + 24) = 0;
  v2 = *(unsigned int *)(this + 56);
  if ( (int)v2 >= 1 )
  {
    v3 = (__int64 *)(*(_QWORD *)(this + 64) + 8LL);
    do
    {
      v4 = *v3++;
      this = TSP::ObjectUUIDMapEntry::Clear(v4);
      --v2;
    }
    while ( v2 );
    *(_DWORD *)(v1 + 56) = 0;
  }
  *(_DWORD *)(v1 + 72) = 0;
  v5 = *(_DWORD *)(v1 + 16);
  if ( (v5 & 3) != 0 )
  {
    if ( (v5 & 1) != 0 )
      this = TSP::ComponentInfo::Clear(*(_QWORD *)(v1 + 96));
    if ( (v5 & 2) != 0 )
      this = TSP::UUID::Clear(*(TSP::UUID **)(v1 + 104));
  }
  v7 = *(_BYTE *)(v1 + 8);
  v6 = v1 + 8;
  *(_DWORD *)(v6 + 8) = 0;
  if ( (v7 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v6);
  }
  return this;
}