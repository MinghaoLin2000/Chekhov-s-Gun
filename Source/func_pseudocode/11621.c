__ZN6google8protobuf8internal15DynamicMapFieldC1EPKNS0_7MessageE
double __fastcall google::protobuf::internal::DynamicMapField::DynamicMapField(__int64 a1, __int64 a2)
{
  double result; // d0

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 850045863LL;
  *(_OWORD *)(a1 + 32) = 0u;
  *(_OWORD *)(a1 + 48) = 0u;
  *(_OWORD *)(a1 + 64) = 0u;
  *(_OWORD *)(a1 + 76) = 0u;
  *(_QWORD *)a1 = off_1001D9D50;
  result = 0.0;
  *(_OWORD *)(a1 + 96) = xmmword_10018BDB0;
  *(_OWORD *)(a1 + 112) = xmmword_10018BDB0;
  *(_QWORD *)(a1 + 128) = &google::protobuf::internal::kGlobalEmptyTable;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = a2;
  return result;
}