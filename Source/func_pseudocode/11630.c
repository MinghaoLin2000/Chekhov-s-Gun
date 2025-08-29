__ZN6google8protobuf8internal15DynamicMapField22InsertOrLookupMapValueERKNS0_6MapKeyEPNS0_11MapValueRefE
bool __fastcall google::protobuf::internal::DynamicMapField::InsertOrLookupMapValue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  __int64 v7; // x22
  __int64 v8; // x21
  _BOOL8 result; // x0
  _QWORD v10[4]; // [xsp+0h] [xbp-40h] BYREF

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
  sub_1000D15A4(v10, v6, a2, 0LL);
  v7 = v10[0];
  if ( v10[0] )
  {
    v8 = v10[0];
  }
  else
  {
    sub_1000D23CC(v10, a1 + 96, a2);
    v8 = v10[0];
    google::protobuf::internal::DynamicMapField::AllocateMapValue(a1, v10[0] + 32LL);
  }
  result = v7 == 0;
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(v8 + 40);
  *(_QWORD *)a3 = *(_QWORD *)(v8 + 32);
  return result;
}