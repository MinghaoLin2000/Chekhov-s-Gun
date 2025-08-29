__ZNK6google8protobuf10Reflection10GetMapDataERKNS0_7MessageEPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::Reflection::GetMapData(
        google::protobuf::Reflection *this,
        const google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3)
{
  if ( (sub_1000BF2A4(a3) & 1) == 0 )
    sub_1000D8734(*(_QWORD *)this, a3, "\"GetMapData\"", "Field is not a map field.");
  return (__int64)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a3);
}