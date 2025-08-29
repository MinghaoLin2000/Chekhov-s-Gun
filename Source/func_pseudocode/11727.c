__ZNK6google8protobuf10Reflection8MapBeginEPNS0_7MessageEPKNS0_15FieldDescriptorE
__int64 __usercall google::protobuf::Reflection::MapBegin@<X0>(
        google::protobuf::Reflection *this@<X0>,
        google::protobuf::Message *a2@<X1>,
        const google::protobuf::FieldDescriptor *a3@<X2>,
        __int64 a4@<X8>)
{
  unsigned int v8; // w0

  if ( (sub_1000BF2A4(a3) & 1) == 0 )
    sub_1000D8734(*(_QWORD *)this, a3, "\"MapBegin\"", "Field is not a map field.");
  sub_1000DF4C8(a4, a2, a3);
  v8 = sub_1000DF774((char *)this + 8, a3);
  return (*(__int64 (__fastcall **)(char *, __int64))(*(_QWORD *)((char *)a2 + v8) + 56LL))((char *)a2 + v8, a4);
}