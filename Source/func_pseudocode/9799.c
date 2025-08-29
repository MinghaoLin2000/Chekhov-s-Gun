__ZNK3TSP14EncryptionInfo13IsInitializedEv
bool __fastcall TSP::EncryptionInfo::IsInitialized(TSP::EncryptionInfo *this)
{
  __int64 v1; // x8
  int v2; // w10
  __int64 v3; // x11

  v1 = *((unsigned int *)this + 8);
  do
  {
    v2 = v1;
    if ( (int)v1 < 1 )
      break;
    v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v1--);
  }
  while ( (*(_BYTE *)(v3 + 16) & 1) != 0 );
  return v2 < 1;
}