__ZN6google8protobuf8internal24InitProtobufDefaultsSlowEv
void __fastcall google::protobuf::internal::InitProtobufDefaultsSlow(google::protobuf::internal *this)
{
  const void *v1; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1001F7D48, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_1001F7D48) )
  {
    google::protobuf::internal::fixed_address_empty_string = 0LL;
    qword_1001F9EE8 = 0LL;
    unk_1001F9EF0 = 0LL;
    google::protobuf::internal::OnShutdownRun(
      (google::protobuf::internal *)google::protobuf::internal::DestroyString,
      (void (__fastcall *)(const void *))&google::protobuf::internal::fixed_address_empty_string,
      v1);
    atomic_store(1u, (unsigned __int8 *)google::protobuf::internal::init_protobuf_defaults_state);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    __cxa_guard_release(&qword_1001F7D48);
  }
}