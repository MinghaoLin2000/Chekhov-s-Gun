__ZN6google8protobuf10ReflectionC1EPKNS0_10DescriptorERKNS0_8internal16ReflectionSchemaEPKNS0_14DescriptorPoolEPNS0_14MessageFactoryE
__int64 *__fastcall google::protobuf::Reflection::Reflection(
        __int64 *a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5)
{
  __int128 v7; // q0
  __int128 v8; // q1

  *a1 = a2;
  v7 = *a3;
  v8 = a3[1];
  *(_OWORD *)(a1 + 5) = a3[2];
  *(_OWORD *)(a1 + 3) = v8;
  *(_OWORD *)(a1 + 1) = v7;
  if ( !a4 )
  {
    a4 = google::protobuf::DescriptorPool::internal_generated_pool((google::protobuf::DescriptorPool *)a1);
    a2 = *a1;
  }
  a1[7] = a4;
  a1[8] = a5;
  *((_DWORD *)a1 + 18) = *(_DWORD *)(a2 + 104) - 1;
  return a1;
}