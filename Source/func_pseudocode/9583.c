__ZNK3TSP24DatabaseImageDataArchive13IsInitializedEv
bool __fastcall TSP::DatabaseImageDataArchive::IsInitialized(TSP::DatabaseImageDataArchive *this)
{
  int v1; // w8
  __int64 v2; // x8
  int v3; // w9
  _BOOL8 result; // x0

  v1 = *((_DWORD *)this + 4);
  result = 0;
  if ( (~v1 & 3) == 0 )
  {
    if ( (v1 & 1) == 0 )
      return 1;
    v2 = *((_QWORD *)this + 3);
    v3 = *(_DWORD *)(v2 + 16);
    if ( (~v3 & 0x22) == 0 && ((v3 & 4) == 0 || (TSP::Reference::IsInitialized(*(TSP::Reference **)(v2 + 40)) & 1) != 0) )
      return 1;
  }
  return result;
}