__ZNK6google8protobuf8internal12MapFieldBase24SyncRepeatedFieldWithMapEv
void __fastcall google::protobuf::internal::MapFieldBase::SyncRepeatedFieldWithMap(atomic_uint *this)
{
  unsigned int explicit; // w8
  std::mutex *v3; // x20
  _QWORD *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  explicit = atomic_load_explicit(this + 22, memory_order_acquire);
  if ( explicit == 2 )
  {
    v3 = (std::mutex *)(this + 6);
    std::mutex::lock((std::mutex *)(this + 6));
    if ( this[22] == 2 )
    {
      if ( !*((_QWORD *)this + 2) )
      {
        if ( *((_QWORD *)this + 1) )
        {
          v4 = (_QWORD *)sub_1000D0E94();
        }
        else
        {
          v4 = (_QWORD *)operator new(24LL, 0x1020C4014030ADELL);
          v4[1] = 0LL;
          v4[2] = 0LL;
          *v4 = 0LL;
        }
        *((_QWORD *)this + 2) = v4;
      }
      goto LABEL_12;
    }
  }
  else
  {
    if ( explicit )
      return;
    v3 = (std::mutex *)(this + 6);
    std::mutex::lock((std::mutex *)(this + 6));
    if ( !this[22] )
    {
      (*(void (__fastcall **)(atomic_uint *))(*(_QWORD *)this + 112LL))(this);
LABEL_12:
      atomic_store(2u, (unsigned int *)this + 22);
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  std::mutex::unlock(v3);
}