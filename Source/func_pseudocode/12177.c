__ZNK6google8protobuf10TextFormat7Printer23PrintShortRepeatedFieldERKNS0_7MessageEPKNS0_10ReflectionEPKNS0_15FieldDescriptorEPNS2_13TextGeneratorE
__int64 __fastcall google::protobuf::TextFormat::Printer::PrintShortRepeatedField(
        __int64 a1,
        const google::protobuf::Message *a2,
        google::protobuf::Reflection *this,
        google::protobuf::FieldDescriptor *a4,
        __int64 a5)
{
  __int64 v10; // x0
  int v11; // w24
  int i; // w25
  __int64 (__fastcall *v13)(__int64, const char *, __int64); // x3
  const char *v14; // x1
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v10 = google::protobuf::Reflection::FieldSize(this, a2, a4);
  v11 = v10;
  google::protobuf::TextFormat::Printer::PrintFieldName(a1, a2, 0xFFFFFFFFLL, v10, this, a4, a5);
  (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a5 + 40LL))(a5, ": [", 3LL);
  if ( v11 >= 1 )
  {
    for ( i = 0; i != v11; ++i )
    {
      if ( i )
        (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a5 + 40LL))(a5, ", ", 2LL);
      google::protobuf::TextFormat::Printer::PrintFieldValue(a1, a2, this, a4, i, a5);
    }
  }
  v13 = *(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a5 + 40LL);
  if ( *(_BYTE *)(a1 + 4) )
    v14 = "] ";
  else
    v14 = "]\n";
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v13(a5, v14, 2LL);
}