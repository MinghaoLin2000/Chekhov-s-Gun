__ZN6google8protobuf10TextFormat6Parser5ParseEPNS0_2io19ZeroCopyInputStreamEPNS0_7MessageE
__int64 __fastcall google::protobuf::TextFormat::Parser::Parse(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 v6; // x22
  __int64 v7; // x0
  __int64 v8; // x19
  __int64 v10; // [xsp+0h] [xbp-140h]
  _BYTE v11[24]; // [xsp+18h] [xbp-128h] BYREF
  __int64 v12; // [xsp+30h] [xbp-110h] BYREF
  __int64 v13; // [xsp+40h] [xbp-100h] BYREF

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 40LL))(a3);
  v6 = *(_BYTE *)(a1 + 31) == 0;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 152LL))(a3);
  BYTE5(v10) = *(_BYTE *)(a1 + 24);
  *(_DWORD *)((char *)&v10 + 1) = *(_DWORD *)(a1 + 27);
  LOBYTE(v10) = *(_BYTE *)(a1 + 26);
  sub_1000FC654(
    v11,
    v7,
    a2,
    *(_QWORD *)a1,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16),
    v6,
    *(unsigned __int8 *)(a1 + 25),
    v10,
    *(_DWORD *)(a1 + 32));
  v8 = google::protobuf::TextFormat::Parser::MergeUsingImpl(a1);
  google::protobuf::io::Tokenizer::~Tokenizer((google::protobuf::io::Tokenizer *)&v13);
  google::protobuf::io::ErrorCollector::~ErrorCollector((google::protobuf::io::ErrorCollector *)&v12);
  return v8;
}