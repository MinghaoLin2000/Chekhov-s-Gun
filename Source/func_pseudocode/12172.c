__ZNK6google8protobuf10TextFormat7Printer23PrintFieldValueToStringERKNS0_7MessageEPKNS0_15FieldDescriptorEiPNSt3__112basic_stringIcNS9_11char_traitsIcEENS9_9allocatorIcEEEE
__int64 __fastcall google::protobuf::TextFormat::Printer::PrintFieldValueToString(
        int *a1,
        google::protobuf::Message *a2,
        google::protobuf::FieldDescriptor *a3,
        int a4,
        __int64 a5)
{
  int v9; // w8
  google::protobuf::Reflection *v10; // x1
  _QWORD v12[3]; // [xsp+8h] [xbp-68h] BYREF
  int v13; // [xsp+20h] [xbp-50h]
  __int16 v14; // [xsp+24h] [xbp-4Ch]
  int v15; // [xsp+28h] [xbp-48h]
  int v16; // [xsp+2Ch] [xbp-44h]
  _BYTE v17[16]; // [xsp+30h] [xbp-40h] BYREF

  if ( *(char *)(a5 + 23) < 0 )
  {
    **(_BYTE **)a5 = 0;
    *(_QWORD *)(a5 + 8) = 0LL;
  }
  else
  {
    *(_BYTE *)a5 = 0;
    *(_BYTE *)(a5 + 23) = 0;
  }
  google::protobuf::io::StringOutputStream::StringOutputStream(v17, a5);
  v9 = *a1;
  v12[0] = &off_1001DB830;
  v12[1] = v17;
  v12[2] = 0LL;
  v13 = 0;
  v14 = 1;
  v15 = v9;
  v16 = v9;
  (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
  google::protobuf::TextFormat::Printer::PrintFieldValue((int)a1, a2, v10, a3, a4);
  return sub_100101264(v12);
}