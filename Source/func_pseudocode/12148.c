__ZN6google8protobuf10TextFormat6Parser15ParseFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS0_7MessageE
__int64 __fastcall google::protobuf::TextFormat::Parser::ParseFromString(__int64 a1, const void **a2, __int64 a3)
{
  __int64 result; // x0
  int v7; // w8
  int v8; // w2
  const void *v9; // x1
  _BYTE v10[32]; // [xsp+0h] [xbp-50h] BYREF
  _QWORD v11[2]; // [xsp+20h] [xbp-30h] BYREF

  sub_10007A644(v11, a2);
  result = sub_1000F8844(v11[0], (google::protobuf *)v11[1]);
  if ( (_DWORD)result )
  {
    v7 = *((char *)a2 + 23);
    if ( v7 >= 0 )
      v8 = *((unsigned __int8 *)a2 + 23);
    else
      v8 = *((_DWORD *)a2 + 2);
    if ( v7 >= 0 )
      v9 = a2;
    else
      v9 = *a2;
    google::protobuf::io::ArrayInputStream::ArrayInputStream((google::protobuf::io::ArrayInputStream *)v10, v9, v8, -1);
    return google::protobuf::TextFormat::Parser::Parse(a1, (__int64)v10, a3);
  }
  return result;
}