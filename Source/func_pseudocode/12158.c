__ZNK6google8protobuf10TextFormat21FastFieldValuePrinter9PrintEnumEiRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS1_17BaseTextGeneratorE
__int64 __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintEnum(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  int v4; // w9
  __int64 *v5; // x1
  __int64 v6; // x2

  v4 = *((char *)a3 + 23);
  if ( v4 >= 0 )
    v5 = a3;
  else
    v5 = (__int64 *)*a3;
  if ( v4 >= 0 )
    v6 = *((unsigned __int8 *)a3 + 23);
  else
    v6 = a3[1];
  return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a4 + 40LL))(a4, v5, v6);
}