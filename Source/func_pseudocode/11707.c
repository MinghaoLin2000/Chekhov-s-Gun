__ZNK6google8protobuf10Reflection7SetEnumEPNS0_7MessageEPKNS0_15FieldDescriptorEPKNS0_19EnumValueDescriptorE
__int64 __fastcall google::protobuf::Reflection::SetEnum(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        const google::protobuf::EnumValueDescriptor *a4)
{
  __int64 v8; // x23
  int v9; // w3
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = *((_QWORD *)a4 + 3);
  if ( v8 != google::protobuf::FieldDescriptor::enum_type(a3) )
    sub_1000DCA4C(*(_QWORD *)this, a3, "SetEnum", a4);
  v9 = *((_DWORD *)a4 + 4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return google::protobuf::Reflection::SetEnumValueInternal(this, a2, a3, v9);
}