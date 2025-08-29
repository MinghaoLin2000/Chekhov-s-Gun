__ZN3TSP15SparseUUIDArray5ClearEv
__int64 __fastcall TSP::SparseUUIDArray::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 *v3; // x21
  __int64 v4; // t1
  __int64 v5; // x19
  char v6; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = this;
  v2 = *(unsigned int *)(this + 32);
  if ( (int)v2 >= 1 )
  {
    v3 = (__int64 *)(*(_QWORD *)(this + 40) + 8LL);
    do
    {
      v4 = *v3++;
      this = TSP::SparseUUIDArray_Entry::Clear(v4);
      --v2;
    }
    while ( v2 );
    *(_DWORD *)(v1 + 32) = 0;
  }
  v6 = *(_BYTE *)(v1 + 8);
  v5 = v1 + 8;
  *(_DWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  if ( (v6 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v5);
  }
  return this;
}