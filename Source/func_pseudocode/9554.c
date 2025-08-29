__ZNK3TSP12DatabaseData13IsInitializedEv
__int64 __fastcall TSP::DatabaseData::IsInitialized(TSP::DataReference **this)
{
  if ( ((_BYTE)this[2] & 1) != 0 )
    return TSP::DataReference::IsInitialized(this[3]);
  else
    return 0LL;
}