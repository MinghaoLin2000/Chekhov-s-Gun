__ZNK3TSP15SparseUUIDArray13IsInitializedEv
__int64 __fastcall TSP::SparseUUIDArray::IsInitialized(TSP::SparseUUIDArray *this)
{
  if ( (*((_BYTE *)this + 16) & 1) != 0 )
    return sub_100068EB4((char *)this + 24);
  else
    return 0LL;
}