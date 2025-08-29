__ZNK6google8protobuf10Reflection7AddEnumEPNS0_7MessageEPKNS0_15FieldDescriptorEPKNS0_19EnumValueDescriptorE
__int64 __fastcall google::protobuf::Reflection::AddEnum(
        google::protobuf::Reflection *a1,
        google::protobuf::Message *a2,
        google::protobuf::FieldDescriptor *this,
        __int64 a4)
{
  __int64 v8; // x23
  int v9; // w3
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = *(_QWORD *)(a4 + 24);
  if ( v8 != google::protobuf::FieldDescriptor::enum_type(this) )
    sub_1000DCA4C(*(_QWORD *)a1, this, "AddEnum", a4);
  v9 = *(_DWORD *)(a4 + 16);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return google::protobuf::Reflection::AddEnumValueInternal(a1, a2, this, v9);
}