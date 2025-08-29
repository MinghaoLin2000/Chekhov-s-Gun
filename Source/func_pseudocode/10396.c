__ZN3TSP15UUIDRectArchive5ClearEv
__int64 __fastcall TSP::UUIDRectArchive::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  TSP::UUID **v3; // x21
  TSP::UUID *v4; // t1
  __int64 v5; // x20
  TSP::UUID **v6; // x21
  TSP::UUID *v7; // t1
  __int64 v8; // x19
  char v9; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = this;
  v2 = *(unsigned int *)(this + 24);
  if ( (int)v2 >= 1 )
  {
    v3 = (TSP::UUID **)(*(_QWORD *)(this + 32) + 8LL);
    do
    {
      v4 = *v3++;
      this = TSP::UUID::Clear(v4);
      --v2;
    }
    while ( v2 );
    *(_DWORD *)(v1 + 24) = 0;
  }
  v5 = *(unsigned int *)(v1 + 48);
  if ( (int)v5 >= 1 )
  {
    v6 = (TSP::UUID **)(*(_QWORD *)(v1 + 56) + 8LL);
    do
    {
      v7 = *v6++;
      this = TSP::UUID::Clear(v7);
      --v5;
    }
    while ( v5 );
    *(_DWORD *)(v1 + 48) = 0;
  }
  v9 = *(_BYTE *)(v1 + 8);
  v8 = v1 + 8;
  if ( (v9 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v8);
  }
  return this;
}