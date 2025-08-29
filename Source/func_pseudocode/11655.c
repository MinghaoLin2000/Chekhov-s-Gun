__ZNK6google8protobuf10Reflection16GetUnknownFieldsERKNS0_7MessageE
unsigned __int64 __fastcall google::protobuf::Reflection::GetUnknownFields(unsigned int *a1, __int64 a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(a2 + a1[9]);
  if ( (v2 & 1) != 0 )
    return (v2 & 0xFFFFFFFFFFFFFFFELL) + 8;
  else
    return google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)a1);
}