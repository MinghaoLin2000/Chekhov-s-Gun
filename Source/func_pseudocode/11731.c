__ZNK6google8protobuf10Reflection8HasOneofERKNS0_7MessageEPKNS0_15OneofDescriptorE
__int64 __fastcall google::protobuf::Reflection::HasOneof(
        google::protobuf::Reflection *a1,
        const google::protobuf::Message *a2,
        __int64 a3)
{
  if ( *(_DWORD *)(a3 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(a3 + 32) + 65LL) )
    return google::protobuf::Reflection::HasField(a1, a2, **(const google::protobuf::FieldDescriptor ***)(a3 + 32));
  else
    return *(_DWORD *)((char *)a2
                     + *((_DWORD *)a1 + 11)
                     - 1431655764
                     * (unsigned int)((unsigned __int64)(a3 - *(_QWORD *)(*(_QWORD *)(a3 + 16) + 48LL)) >> 4)) != 0;
}