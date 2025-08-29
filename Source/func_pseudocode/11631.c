__ZNK6google8protobuf8internal15DynamicMapField14LookupMapValueERKNS0_6MapKeyEPNS0_16MapValueConstRefE
bool __fastcall google::protobuf::internal::DynamicMapField::LookupMapValue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x0
  __int64 v6; // x8
  _QWORD v8[4]; // [xsp+0h] [xbp-30h] BYREF

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  sub_1000D15A4(v8, v5, a2, 0LL);
  v6 = v8[0];
  if ( v8[0] )
  {
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(v8[0] + 40LL);
    *(_QWORD *)a3 = *(_QWORD *)(v6 + 32);
  }
  return v6 != 0;
}