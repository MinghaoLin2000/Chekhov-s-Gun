__ZN6google8protobuf14DescriptorPool23internal_generated_poolEv
__int64 __fastcall google::protobuf::DescriptorPool::internal_generated_pool(google::protobuf::DescriptorPool *this)
{
  void (__fastcall *v2)(const void *); // x19
  const void *v3; // x2

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1001F7A08, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_1001F7A08) )
  {
    v2 = (void (__fastcall *)(const void *))sub_10007D5D4();
    google::protobuf::internal::OnShutdownRun(
      (google::protobuf::internal *)google::protobuf::internal::OnShutdownDelete<google::protobuf::DescriptorPool>(google::protobuf::DescriptorPool *)::{lambda(void const*)#1}::__invoke,
      v2,
      v3);
    qword_1001F7A00 = (__int64)v2;
    __cxa_guard_release(&qword_1001F7A08);
  }
  return qword_1001F7A00;
}