__ZNK3TSP16PasteboardObject13IsInitializedEv
bool __fastcall TSP::PasteboardObject::IsInitialized(TSP::PasteboardObject *this)
{
  __int64 v1; // x8
  __int64 v2; // x10
  __int64 v3; // x8
  __int64 v4; // x10
  __int64 v5; // x8
  __int64 v6; // x10
  __int64 v7; // x8
  __int64 v8; // x10
  __int64 v9; // x9
  __int64 v10; // x11
  int v11; // w8

  v1 = *((unsigned int *)this + 8);
  while ( (int)v1 >= 1 )
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v1--);
    if ( (*(_BYTE *)(v2 + 16) & 1) == 0 )
      return 0LL;
  }
  v3 = *((unsigned int *)this + 14);
  while ( (int)v3 >= 1 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3--);
    if ( (*(_BYTE *)(v4 + 16) & 1) == 0 )
      return 0LL;
  }
  v5 = *((unsigned int *)this + 20);
  while ( (int)v5 >= 1 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v5--);
    if ( (*(_BYTE *)(v6 + 16) & 1) == 0 )
      return 0LL;
  }
  v7 = *((unsigned int *)this + 26);
  while ( (int)v7 >= 1 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v7--);
    if ( (*(_BYTE *)(v8 + 16) & 1) == 0 )
      return 0LL;
  }
  v9 = *((unsigned int *)this + 32);
  while ( (int)v9 >= 1 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v9--);
    if ( (~*(_DWORD *)(v10 + 16) & 3) != 0 )
      return 0LL;
  }
  v11 = *((_DWORD *)this + 4);
  return ((v11 & 1) == 0 || (*(_BYTE *)(*((_QWORD *)this + 18) + 16LL) & 1) != 0)
      && ((v11 & 2) == 0 || (*(_BYTE *)(*((_QWORD *)this + 19) + 16LL) & 1) != 0)
      && ((v11 & 4) == 0 || (*(_BYTE *)(*((_QWORD *)this + 20) + 16LL) & 1) != 0)
      && ((v11 & 8) == 0 || (*(_BYTE *)(*((_QWORD *)this + 21) + 16LL) & 1) != 0)
      && ((v11 & 0x10) == 0 || (*(_BYTE *)(*((_QWORD *)this + 22) + 16LL) & 1) != 0);
}