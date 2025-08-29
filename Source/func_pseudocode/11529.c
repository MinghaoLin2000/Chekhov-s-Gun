__ZN6google8protobuf8internal12ExtensionSet14MutableMessageEihRKNS0_11MessageLiteEPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::internal::ExtensionSet::MutableMessage(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        char a3,
        const google::protobuf::MessageLite *a4,
        const google::protobuf::FieldDescriptor *a5)
{
  __int64 v9; // x0
  __int64 v10; // x20
  char v11; // w1
  __int64 result; // x0
  char v13; // w8
  __int64 (*v14)(void); // x2
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v9 = google::protobuf::internal::ExtensionSet::Insert(this, a2);
  v10 = v9;
  *(_QWORD *)(v9 + 16) = a5;
  if ( v11 )
  {
    *(_BYTE *)(v9 + 8) = a3;
    *(_BYTE *)(v9 + 9) = 0;
    *(_BYTE *)(v9 + 10) &= 0xFu;
    result = (*(__int64 (__fastcall **)(const google::protobuf::MessageLite *, _QWORD))(*(_QWORD *)a4 + 32LL))(
               a4,
               *(_QWORD *)this);
    *(_QWORD *)v10 = result;
    *(_BYTE *)(v10 + 10) &= 0xF0u;
  }
  else
  {
    v13 = *(_BYTE *)(v9 + 10);
    *(_BYTE *)(v9 + 10) = v13 & 0xF0;
    result = *(_QWORD *)v9;
    if ( (v13 & 0x10) != 0 )
    {
      v14 = *(__int64 (**)(void))(*(_QWORD *)result + 32LL);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return v14();
    }
  }
  return result;
}