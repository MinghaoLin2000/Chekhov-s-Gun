__ZN3TSP27ObjectSerializationMetadata5ClearEv
__int64 __fastcall TSP::ObjectSerializationMetadata::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 *v3; // x21
  __int64 v4; // t1
  __int64 v5; // x20
  __int64 *v6; // x21
  __int64 v7; // t1
  int v8; // w20
  __int64 v9; // x19
  char v10; // t1
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
      this = TSP::DataInfo::Clear(v4);
      --v2;
    }
    while ( v2 );
    *(_DWORD *)(v1 + 56) = 0;
  }
  v5 = *(unsigned int *)(v1 + 80);
  if ( (int)v5 >= 1 )
  {
    v6 = (__int64 *)(*(_QWORD *)(v1 + 88) + 8LL);
    do
    {
      v7 = *v6++;
      this = TSP::ObjectUUIDMapEntry::Clear(v7);
      --v5;
    }
    while ( v5 );
    *(_DWORD *)(v1 + 80) = 0;
  }
  *(_DWORD *)(v1 + 96) = 0;
  v8 = *(_DWORD *)(v1 + 16);
  if ( (v8 & 0xF) == 0 )
    goto LABEL_15;
  if ( (v8 & 1) == 0 )
  {
    if ( (v8 & 2) == 0 )
      goto LABEL_12;
LABEL_20:
    this = TSP::UUID::Clear(*(TSP::UUID **)(v1 + 128));
    if ( (v8 & 4) == 0 )
    {
LABEL_13:
      if ( (v8 & 8) == 0 )
        goto LABEL_15;
      goto LABEL_14;
    }
    goto LABEL_21;
  }
  this = TSP::UUID::Clear(*(TSP::UUID **)(v1 + 120));
  if ( (v8 & 2) != 0 )
    goto LABEL_20;
LABEL_12:
  if ( (v8 & 4) == 0 )
    goto LABEL_13;
LABEL_21:
  this = TSP::ComponentInfo::Clear(*(_QWORD *)(v1 + 136));
  if ( (v8 & 8) != 0 )
LABEL_14:
    this = TSP::Reference::Clear(*(TSP::Reference **)(v1 + 144));
LABEL_15:
  v10 = *(_BYTE *)(v1 + 8);
  v9 = v1 + 8;
  *(_DWORD *)(v9 + 8) = 0;
  if ( (v10 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v9);
  }
  return this;
}