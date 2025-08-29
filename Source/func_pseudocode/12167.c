__ZNK6google8protobuf10TextFormat7Printer5PrintERKNS0_7MessageEPNS0_2io20ZeroCopyOutputStreamE
bool __fastcall google::protobuf::TextFormat::Printer::Print(
        google::protobuf::TextFormat::Printer *this,
        const google::protobuf::Message *a2,
        google::protobuf::io::ZeroCopyOutputStream *a3)
{
  int v3; // w8
  _BOOL8 v4; // x19
  _QWORD v6[3]; // [xsp+8h] [xbp-38h] BYREF
  int v7; // [xsp+20h] [xbp-20h]
  __int16 v8; // [xsp+24h] [xbp-1Ch]
  int v9; // [xsp+28h] [xbp-18h]
  int v10; // [xsp+2Ch] [xbp-14h]

  v3 = *(_DWORD *)this;
  v6[0] = &off_1001DB830;
  v6[1] = a3;
  v6[2] = 0LL;
  v7 = 0;
  v8 = 1;
  v9 = v3;
  v10 = v3;
  google::protobuf::TextFormat::Printer::Print();
  v4 = HIBYTE(v8) == 0;
  sub_100101264(v6);
  return v4;
}