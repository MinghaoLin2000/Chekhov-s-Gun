__ZNK3TSP16DataPropertiesV113IsInitializedEv
bool __fastcall TSP::DataPropertiesV1::IsInitialized(TSP::DataPropertiesV1 *this)
{
  __int64 v1; // x8
  int v2; // w10
  __int64 v3; // x11

  v1 = *((unsigned int *)this + 6);
  do
  {
    v2 = v1;
    if ( (int)v1 < 1 )
      break;
    v3 = *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v1--);
  }
  while ( (*(_BYTE *)(v3 + 16) & 1) != 0 );
  return v2 < 1;
}