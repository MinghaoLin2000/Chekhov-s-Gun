__ZN6google8protobuf8internal15DynamicMapFieldC1EPKNS0_7MessageEPNS0_5ArenaE
double __fastcall google::protobuf::internal::DynamicMapField::DynamicMapField(
        google::protobuf::internal::DynamicMapField *this,
        const google::protobuf::Message *a2,
        google::protobuf::Arena *a3)
{
  __int64 v5; // x0
  double result; // d0

  v5 = sub_1000D1324(this, a3);
  *(_QWORD *)v5 = off_1001D9D50;
  result = 0.0;
  *(_OWORD *)(v5 + 96) = xmmword_10018BDB0;
  *(_OWORD *)(v5 + 112) = xmmword_10018BDB0;
  *(_QWORD *)(v5 + 128) = &google::protobuf::internal::kGlobalEmptyTable;
  *(_QWORD *)(v5 + 136) = a3;
  *(_QWORD *)(v5 + 144) = a2;
  return result;
}