__ZN3TSP10LargeArray5ClearEv
__int64 __fastcall TSP::LargeArray::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  TSP::Range **v3; // x21
  TSP::Range *v4; // t1
  __int64 v5; // x20
  TSP::Reference **v6; // x21
  TSP::Reference *v7; // t1
  __int64 v8; // x19
  char v9; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = this;
  v2 = *(unsigned int *)(this + 32);
  if ( (int)v2 >= 1 )
  {
    v3 = (TSP::Range **)(*(_QWORD *)(this + 40) + 8LL);
    do
    {
      v4 = *v3++;
      this = TSP::Range::Clear(v4);
      --v2;
    }
    while ( v2 );
    *(_DWORD *)(v1 + 32) = 0;
  }
  v5 = *(unsigned int *)(v1 + 56);
  if ( (int)v5 >= 1 )
  {
    v6 = (TSP::Reference **)(*(_QWORD *)(v1 + 64) + 8LL);
    do
    {
      v7 = *v6++;
      this = TSP::Reference::Clear(v7);
      --v5;
    }
    while ( v5 );
    *(_DWORD *)(v1 + 56) = 0;
  }
  if ( (*(_BYTE *)(v1 + 16) & 0x7F) != 0 )
  {
    *(_QWORD *)(v1 + 104) = 0LL;
    *(_OWORD *)(v1 + 88) = 0u;
    *(_OWORD *)(v1 + 72) = 0u;
  }
  v9 = *(_BYTE *)(v1 + 8);
  v8 = v1 + 8;
  *(_DWORD *)(v8 + 8) = 0;
  if ( (v9 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v8);
  }
  return this;
}