__ZN6google8protobuf8internal24ComputeUnknownFieldsSizeERKNS1_16InternalMetadataEmPNS1_10CachedSizeE
char *__fastcall google::protobuf::internal::ComputeUnknownFieldsSize(
        google::protobuf::UnknownFieldSet *a1,
        const google::protobuf::UnknownFieldSet *a2,
        _DWORD *a3)
{
  google::protobuf::internal::WireFormat *v5; // x0
  char *result; // x0

  if ( (*(_QWORD *)a1 & 1) != 0 )
    v5 = (google::protobuf::internal::WireFormat *)((*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFELL) + 8);
  else
    v5 = (google::protobuf::internal::WireFormat *)google::protobuf::UnknownFieldSet::default_instance(a1);
  result = (char *)a2 + google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v5, a2);
  *a3 = (_DWORD)result;
  return result;
}