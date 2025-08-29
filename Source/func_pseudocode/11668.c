__ZNK6google8protobuf10Reflection8HasFieldERKNS0_7MessageEPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::Reflection::HasField(
        google::protobuf::Reflection *this,
        const google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3)
{
  __int64 v6; // x0
  google::protobuf::internal::ExtensionSet *v7; // x0
  int v8; // w1
  __int64 v10; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = *(_QWORD *)this;
  if ( *((_QWORD *)a3 + 10) != v6 )
    sub_1000D8734(v6, a3, "HasField", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) == 3 )
    sub_1000D8734(*(_QWORD *)this, a3, "HasField", "Field is repeated; the method requires a singular field.");
  if ( *((_BYTE *)a3 + 67) )
  {
    v7 = (const google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10));
    v8 = *((_DWORD *)a3 + 17);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ExtensionSet::Has(v7, v8);
  }
  else
  {
    v10 = *((_QWORD *)a3 + 11);
    if ( !v10 || *(_DWORD *)(v10 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v10 + 32) + 65LL) )
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return sub_1000D8808(this, a2, a3);
    }
    else
    {
      return *(_DWORD *)((char *)a2
                       + *((_DWORD *)this + 11)
                       - 1431655764
                       * (unsigned int)((unsigned __int64)(v10 - *(_QWORD *)(*(_QWORD *)(v10 + 16) + 48LL)) >> 4)) == *((_DWORD *)a3 + 17);
    }
  }
}