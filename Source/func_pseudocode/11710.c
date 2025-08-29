__ZNK6google8protobuf10Reflection15GetRepeatedEnumERKNS0_7MessageEPKNS0_15FieldDescriptorEi
__int64 __fastcall google::protobuf::Reflection::GetRepeatedEnum(
        google::protobuf::Reflection *this,
        const google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        int a4)
{
  __int64 RepeatedEnumValue; // x20
  google::protobuf::EnumDescriptor *v6; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  RepeatedEnumValue = google::protobuf::Reflection::GetRepeatedEnumValue(this, a2, a3, a4);
  v6 = (google::protobuf::EnumDescriptor *)google::protobuf::FieldDescriptor::enum_type(a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return google::protobuf::EnumDescriptor::FindValueByNumberCreatingIfUnknown(v6, RepeatedEnumValue);
}