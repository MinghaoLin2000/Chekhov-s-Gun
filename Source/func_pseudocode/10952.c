__ZN6google8protobuf17DescriptorBuilder18ValidateProto3EnumEPNS0_14EnumDescriptorERKNS0_19EnumDescriptorProtoE
void __fastcall google::protobuf::DescriptorBuilder::ValidateProto3Enum(
        google::protobuf::DescriptorBuilder *this,
        google::protobuf::EnumDescriptor *a2,
        const google::protobuf::EnumDescriptorProto *a3)
{
  if ( *((int *)a2 + 11) >= 1 )
  {
    if ( *(_DWORD *)(*((_QWORD *)a2 + 6) + 16LL) )
      google::protobuf::DescriptorBuilder::AddError(
        (__int64)this,
        *((_QWORD *)a2 + 1),
        *(_QWORD *)(*((_QWORD *)a3 + 5) + 8LL),
        1LL,
        "The first enum value must be zero in proto3.");
  }
}