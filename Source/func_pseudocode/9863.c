__ZNK3TSP19EncryptionBlockInfo13IsInitializedEv
__int64 __fastcall TSP::EncryptionBlockInfo::IsInitialized(TSP::EncryptionBlockInfo *this)
{
  return *((_DWORD *)this + 4) & 1;
}