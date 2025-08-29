__ZNK6google8protobuf8internal12MapFieldBase24SyncMapWithRepeatedFieldEv
void __fastcall google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(
        google::protobuf::internal::MapFieldBase *this)
{
  std::mutex *v2; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( atomic_load_explicit((atomic_uint *volatile)this + 22, memory_order_acquire) == 1 )
  {
    v2 = (std::mutex *)((char *)this + 24);
    std::mutex::lock((std::mutex *)((char *)this + 24));
    if ( *((_DWORD *)this + 22) == 1 )
    {
      (*(void (__fastcall **)(google::protobuf::internal::MapFieldBase *))(*(_QWORD *)this + 120LL))(this);
      atomic_store(2u, (unsigned int *)this + 22);
    }
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    std::mutex::unlock(v2);
  }
}