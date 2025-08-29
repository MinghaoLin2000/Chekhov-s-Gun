__ZNK6google8protobuf14DescriptorPool31NewPlaceholderFileWithMutexHeldENS0_11StringPieceE
__int64 __fastcall google::protobuf::DescriptorPool::NewPlaceholderFileWithMutexHeld(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 Bytes; // x19
  google::protobuf::internal *String; // x0
  google::protobuf::SourceCodeInfo *v8; // x0
  google::protobuf::FileDescriptorTables *v10; // x20
  const void *v11; // x2

  Bytes = google::protobuf::DescriptorPool::Tables::AllocateBytes(
            *(google::protobuf::DescriptorPool::Tables **)(a1 + 32),
            160);
  *(_OWORD *)Bytes = 0u;
  *(_OWORD *)(Bytes + 16) = 0u;
  *(_OWORD *)(Bytes + 32) = 0u;
  *(_OWORD *)(Bytes + 48) = 0u;
  *(_OWORD *)(Bytes + 64) = 0u;
  *(_OWORD *)(Bytes + 80) = 0u;
  *(_OWORD *)(Bytes + 96) = 0u;
  *(_OWORD *)(Bytes + 112) = 0u;
  *(_OWORD *)(Bytes + 128) = 0u;
  *(_OWORD *)(Bytes + 144) = 0u;
  String = (google::protobuf::internal *)google::protobuf::DescriptorPool::Tables::AllocateString(
                                           *(_QWORD **)(a1 + 32),
                                           a2,
                                           a3);
  *(_QWORD *)Bytes = String;
  if ( (atomic_load_explicit(google::protobuf::internal::init_protobuf_defaults_state, memory_order_acquire) & 1) == 0 )
    String = (google::protobuf::internal *)google::protobuf::internal::InitProtobufDefaultsSlow(String);
  *(_QWORD *)(Bytes + 8) = &google::protobuf::internal::fixed_address_empty_string;
  *(_QWORD *)(Bytes + 16) = a1;
  v8 = (google::protobuf::SourceCodeInfo *)google::protobuf::FileOptions::default_instance(String);
  *(_QWORD *)(Bytes + 136) = v8;
  if ( (atomic_load_explicit(
          (atomic_uchar *volatile)&`guard variable for'google::protobuf::FileDescriptorTables::GetEmptyInstance(void)::file_descriptor_tables,
          memory_order_acquire) & 1) == 0 )
  {
    v8 = (google::protobuf::SourceCodeInfo *)__cxa_guard_acquire(&`guard variable for'google::protobuf::FileDescriptorTables::GetEmptyInstance(void)::file_descriptor_tables);
    if ( (_DWORD)v8 )
    {
      v10 = (google::protobuf::FileDescriptorTables *)operator new(384LL, 0x10A0C40C644375CLL);
      google::protobuf::FileDescriptorTables::FileDescriptorTables(v10);
      google::protobuf::internal::OnShutdownRun(
        (google::protobuf::internal *)google::protobuf::internal::OnShutdownDelete<google::protobuf::FileDescriptorTables>(google::protobuf::FileDescriptorTables *)::{lambda(void const*)#1}::__invoke,
        (void (__fastcall *)(const void *))v10,
        v11);
      google::protobuf::FileDescriptorTables::GetEmptyInstance(void)::file_descriptor_tables = (__int64)v10;
      __cxa_guard_release(&`guard variable for'google::protobuf::FileDescriptorTables::GetEmptyInstance(void)::file_descriptor_tables);
    }
  }
  *(_QWORD *)(Bytes + 144) = google::protobuf::FileDescriptorTables::GetEmptyInstance(void)::file_descriptor_tables;
  *(_QWORD *)(Bytes + 152) = google::protobuf::SourceCodeInfo::default_instance(v8);
  *(_WORD *)(Bytes + 64) = 257;
  *(_DWORD *)(Bytes + 60) = 0;
  return Bytes;
}