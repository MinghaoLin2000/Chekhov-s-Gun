__ZN3TSP15PackageMetadata5ClearEv
__int64 __fastcall TSP::PackageMetadata::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 *v3; // x21
  __int64 v4; // t1
  __int64 v5; // x20
  TSP::DataInfo **v6; // x21
  TSP::DataInfo *v7; // t1
  __int64 v8; // x20
  __int64 *v9; // x21
  __int64 v10; // t1
  int v11; // w20
  __int64 v12; // x19
  char v13; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = this;
  v2 = *(unsigned int *)(this + 32);
  if ( (int)v2 >= 1 )
  {
    v3 = (__int64 *)(*(_QWORD *)(this + 40) + 8LL);
    do
    {
      v4 = *v3++;
      this = TSP::ComponentInfo::Clear(v4);
      --v2;
    }
    while ( v2 );
    *(_DWORD *)(v1 + 32) = 0;
  }
  v5 = *(unsigned int *)(v1 + 56);
  if ( (int)v5 >= 1 )
  {
    v6 = (TSP::DataInfo **)(*(_QWORD *)(v1 + 64) + 8LL);
    do
    {
      v7 = *v6++;
      this = TSP::DataInfo::Clear(v7);
      --v5;
    }
    while ( v5 );
    *(_DWORD *)(v1 + 56) = 0;
  }
  *(_DWORD *)(v1 + 72) = 0;
  *(_DWORD *)(v1 + 96) = 0;
  *(_DWORD *)(v1 + 120) = 0;
  v8 = *(unsigned int *)(v1 + 152);
  if ( (int)v8 >= 1 )
  {
    v9 = (__int64 *)(*(_QWORD *)(v1 + 160) + 8LL);
    do
    {
      v10 = *v9++;
      this = TSP::ComponentInfo::Clear(v10);
      --v8;
    }
    while ( v8 );
    *(_DWORD *)(v1 + 152) = 0;
  }
  v11 = *(_DWORD *)(v1 + 16);
  if ( (v11 & 3) != 0 )
  {
    if ( (v11 & 1) != 0 )
      this = TSP::DocumentRevision::Clear(*(TSP::DocumentRevision **)(v1 + 168));
    if ( (v11 & 2) != 0 )
      this = TSP::Reference::Clear(*(TSP::Reference **)(v1 + 176));
  }
  if ( (v11 & 0x1C) != 0 )
  {
    *(_QWORD *)(v1 + 184) = 0LL;
    *(_QWORD *)(v1 + 192) = 0LL;
    *(_DWORD *)(v1 + 200) = 0;
  }
  v13 = *(_BYTE *)(v1 + 8);
  v12 = v1 + 8;
  *(_DWORD *)(v12 + 8) = 0;
  if ( (v13 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v12);
  }
  return this;
}