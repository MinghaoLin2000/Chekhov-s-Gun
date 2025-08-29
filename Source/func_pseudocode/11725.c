__ZNK6google8protobuf10Reflection23GetOneofFieldDescriptorERKNS0_7MessageEPKNS0_15OneofDescriptorE
__int64 __fastcall google::protobuf::Reflection::GetOneofFieldDescriptor(
        google::protobuf::Reflection *a1,
        const google::protobuf::Message *a2,
        __int64 a3)
{
  __int64 v3; // x19
  int v5; // w1
  google::protobuf::Descriptor *v6; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( *(_DWORD *)(a3 + 24) == 1 && (v3 = **(_QWORD **)(a3 + 32), *(_BYTE *)(v3 + 65)) )
  {
    if ( (unsigned int)google::protobuf::Reflection::HasField(
                         a1,
                         a2,
                         **(const google::protobuf::FieldDescriptor ***)(a3 + 32)) )
      return v3;
    else
      return 0LL;
  }
  else
  {
    v5 = *(_DWORD *)((char *)a2
                   + *((_DWORD *)a1 + 11)
                   - 1431655764 * (unsigned int)((unsigned __int64)(a3 - *(_QWORD *)(*(_QWORD *)(a3 + 16) + 48LL)) >> 4));
    if ( v5 )
    {
      v6 = *(google::protobuf::Descriptor **)a1;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return google::protobuf::Descriptor::FindFieldByNumber(v6, v5);
    }
    else
    {
      return 0LL;
    }
  }
}