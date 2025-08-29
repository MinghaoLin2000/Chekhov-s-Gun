__ZNK6google8protobuf10Reflection7GetEnumERKNS0_7MessageEPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::Reflection::GetEnum(
        google::protobuf::Reflection *this,
        const google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3)
{
  __int64 EnumValue; // x20
  google::protobuf::EnumDescriptor *v5; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  EnumValue = google::protobuf::Reflection::GetEnumValue(this, a2, a3);
  v5 = (google::protobuf::EnumDescriptor *)google::protobuf::FieldDescriptor::enum_type(a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return google::protobuf::EnumDescriptor::FindValueByNumberCreatingIfUnknown(v5, EnumValue);
}