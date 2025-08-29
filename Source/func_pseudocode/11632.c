__ZN6google8protobuf8internal15DynamicMapField14DeleteMapValueERKNS0_6MapKeyE
bool __fastcall google::protobuf::internal::DynamicMapField::DeleteMapValue(__int64 a1, __int64 a2)
{
  __int128 v4; // q0
  __int64 v5; // x21
  __int64 v6; // x22
  __int128 v8; // [xsp+0h] [xbp-70h]
  __int128 v9; // [xsp+10h] [xbp-60h] BYREF
  __int64 v10; // [xsp+20h] [xbp-50h]
  __int128 v11; // [xsp+30h] [xbp-40h] BYREF
  __int64 v12; // [xsp+40h] [xbp-30h]

  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField((google::protobuf::internal::MapFieldBase *)a1);
  sub_1000D15A4(&v11, a1 + 96, a2, 0LL);
  v4 = v11;
  v5 = v11;
  if ( (_QWORD)v11 )
  {
    v6 = v12;
    *(_DWORD *)(a1 + 88) = 0;
    if ( !*(_QWORD *)(a1 + 8) )
    {
      v8 = v4;
      sub_1000CD248(v5 + 32);
      v4 = v8;
    }
    v9 = v4;
    v10 = v6;
    v11 = v4;
    v12 = v6;
    sub_1000D1430(&v9);
    sub_1000D2E08(a1 + 96, &v11);
  }
  return v5 != 0;
}