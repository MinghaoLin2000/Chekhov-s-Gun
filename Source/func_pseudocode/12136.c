__ZNK6google8protobuf10TextFormat7Printer13PrintToStringERKNS0_7MessageEPNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE
__int64 __fastcall google::protobuf::TextFormat::Printer::PrintToString(
        google::protobuf::TextFormat::Printer *a1,
        const google::protobuf::Message *a2,
        __int64 a3)
{
  _BYTE v6[16]; // [xsp+0h] [xbp-20h] BYREF

  if ( *(char *)(a3 + 23) < 0 )
  {
    **(_BYTE **)a3 = 0;
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  else
  {
    *(_BYTE *)a3 = 0;
    *(_BYTE *)(a3 + 23) = 0;
  }
  google::protobuf::io::StringOutputStream::StringOutputStream(v6, a3);
  return google::protobuf::TextFormat::Printer::Print(a1, a2, (google::protobuf::io::ZeroCopyOutputStream *)v6);
}