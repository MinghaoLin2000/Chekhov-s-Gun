__ZNK6google8protobuf10Reflection20MutableUnknownFieldsEPNS0_7MessageE
unsigned __int64 __fastcall google::protobuf::Reflection::MutableUnknownFields(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2)
{
  _QWORD *v2; // x0

  v2 = (_QWORD *)((char *)a2 + *((unsigned int *)this + 9));
  if ( (*v2 & 1) != 0 )
    return (*v2 & 0xFFFFFFFFFFFFFFFELL) + 8;
  else
    return sub_10003A0B4(v2);
}