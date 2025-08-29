__ZNK3TSP20SparseReferenceArray13IsInitializedEv
__int64 __fastcall TSP::SparseReferenceArray::IsInitialized(TSP::SparseReferenceArray *this)
{
  if ( (*((_BYTE *)this + 16) & 1) != 0 )
    return sub_10005E3B4((char *)this + 24);
  else
    return 0LL;
}