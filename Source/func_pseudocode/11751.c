__ZN6google8protobuf8internal14AddDescriptorsEPKNS1_15DescriptorTableE
__int64 __fastcall google::protobuf::internal::AddDescriptors(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x20
  atomic_uint *v3; // x0
  __int64 v4; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( !*(_BYTE *)result )
  {
    v1 = result;
    *(_BYTE *)result = 1;
    if ( *(int *)(result + 56) >= 1 )
    {
      v2 = 0LL;
      do
      {
        v3 = *(atomic_uint **)(*(_QWORD *)(v1 + 40) + 8 * v2);
        if ( atomic_load_explicit(v3, memory_order_acquire) )
          google::protobuf::internal::InitSCCImpl(v3);
        ++v2;
      }
      while ( v2 < *(int *)(v1 + 56) );
    }
    v4 = *(unsigned int *)(v1 + 60);
    if ( (int)v4 >= 1 )
    {
      v5 = 0LL;
      v6 = 8 * v4;
      do
      {
        if ( *(_QWORD *)(*(_QWORD *)(v1 + 48) + v5) )
          google::protobuf::internal::AddDescriptors();
        v5 += 8LL;
      }
      while ( v6 != v5 );
    }
    google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      *(google::protobuf::DescriptorPool **)(v1 + 8),
      (const void *)*(unsigned int *)(v1 + 24));
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::MessageFactory::InternalRegisterGeneratedFile(v1);
  }
  return result;
}