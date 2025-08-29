__ZN6google8protobuf10TextFormat23PrintFieldValueToStringERKNS0_7MessageEPKNS0_15FieldDescriptorEiPNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE
__int64 __fastcall google::protobuf::TextFormat::PrintFieldValueToString(
        google::protobuf::Message *a1,
        google::protobuf::FieldDescriptor *a2,
        int a3,
        __int64 a4)
{
  __int64 result; // x0
  int v9[6]; // [xsp+8h] [xbp-88h] BYREF
  __int64 v10; // [xsp+20h] [xbp-70h]
  _QWORD v11[3]; // [xsp+28h] [xbp-68h] BYREF
  _QWORD v12[4]; // [xsp+40h] [xbp-50h] BYREF

  google::protobuf::TextFormat::Printer::Printer((google::protobuf::TextFormat::Printer *)v9);
  google::protobuf::TextFormat::Printer::PrintFieldValueToString(v9, a1, a2, a3, a4);
  sub_100097708(v12, v12[1]);
  sub_10009778C(v11, v11[1]);
  result = v10;
  v10 = 0LL;
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}