__ZN6google8protobuf15UnknownFieldSet16default_instanceEv
__int64 __fastcall google::protobuf::UnknownFieldSet::default_instance(google::protobuf::UnknownFieldSet *this)
{
  __int64 v2; // x19
  const void *v3; // x2

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1001F7EB8, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_1001F7EB8) )
  {
    v2 = operator new(24LL, 0x20C40960023A9LL);
    *(_QWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
    google::protobuf::internal::OnShutdownRun(
      (google::protobuf::internal *)google::protobuf::internal::OnShutdownDelete<google::protobuf::UnknownFieldSet>(google::protobuf::UnknownFieldSet *)::{lambda(void const*)#1}::__invoke,
      (void (__fastcall *)(const void *))v2,
      v3);
    qword_1001F7EB0 = v2;
    __cxa_guard_release(&qword_1001F7EB8);
  }
  return qword_1001F7EB0;
}