__ZNK6google8protobuf8internal12ExtensionSet10GetMessageEiPKNS0_10DescriptorEPNS0_14MessageFactoryE
__int64 __fastcall google::protobuf::internal::ExtensionSet::GetMessage(
        google::protobuf::internal::ExtensionSet *a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  _BYTE *v6; // x0
  __int64 v7; // x21
  __int64 (__fastcall *v9)(__int64, __int64); // x2
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = google::protobuf::internal::ExtensionSet::FindOrNull(a1, a2);
  if ( !v6 || (v6[10] & 1) != 0 )
  {
    v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 16LL);
    v10 = a4;
    v11 = a3;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
  }
  else
  {
    v7 = *(_QWORD *)v6;
    if ( (v6[10] & 0x10) == 0 )
      return *(_QWORD *)v6;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 16LL))(a4, a3);
    v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL);
    v10 = v7;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
  }
  return v9(v10, v11);
}