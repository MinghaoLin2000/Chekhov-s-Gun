__ZNK6google8protobuf8internal12MapFieldBase30SyncRepeatedFieldWithMapNoLockEv
__int64 __fastcall google::protobuf::internal::MapFieldBase::SyncRepeatedFieldWithMapNoLock(__int64 this)
{
  __int64 v1; // x19

  if ( !*(_QWORD *)(this + 16) )
  {
    v1 = this;
    this = sub_1000D0E94(*(_QWORD *)(this + 8));
    *(_QWORD *)(v1 + 16) = this;
  }
  return this;
}