__ZNK6google8protobuf8internal15DynamicMapField14ContainsMapKeyERKNS0_6MapKeyE
bool __fastcall google::protobuf::internal::DynamicMapField::ContainsMapKey(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  _QWORD v5[4]; // [xsp+0h] [xbp-30h] BYREF

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  sub_1000D15A4(v5, v3, a2, 0LL);
  return v5[0] != 0LL;
}