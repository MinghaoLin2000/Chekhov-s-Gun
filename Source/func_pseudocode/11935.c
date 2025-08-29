__ZN6google8protobuf8internal13MergeFromImplILb0EEEbNS0_11StringPieceEPNS0_11MessageLiteENS4_10ParseFlagsE
__int64 __fastcall google::protobuf::internal::MergeFromImpl<false>(
        void *__src,
        size_t __n,
        google::protobuf::MessageLite *a3,
        char a4)
{
  __int64 v6; // x0
  bool v7; // zf
  _BYTE v9[32]; // [xsp+8h] [xbp-88h] BYREF
  __int128 v10; // [xsp+28h] [xbp-68h]
  __int128 v11; // [xsp+38h] [xbp-58h]
  __int128 v12; // [xsp+48h] [xbp-48h]
  __int64 v13; // [xsp+58h] [xbp-38h]
  int v14; // [xsp+60h] [xbp-30h]
  unsigned int v15; // [xsp+64h] [xbp-2Ch]
  __int64 v16; // [xsp+68h] [xbp-28h]
  __int64 v17; // [xsp+70h] [xbp-20h]

  v10 = 0u;
  v11 = 0u;
  v12 = 0u;
  v13 = 0x7FFFFFFF00000000LL;
  v14 = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v15 = 0x80000000;
  v16 = 0LL;
  v17 = 0LL;
  v6 = sub_1000C8B7C((int)v9, __src, __n);
  if ( (*(__int64 (__fastcall **)(google::protobuf::MessageLite *, __int64, _BYTE *))(*(_QWORD *)a3 + 88LL))(a3, v6, v9) )
    v7 = (_DWORD)v13 == 0;
  else
    v7 = 0;
  if ( v7 )
  {
    if ( (a4 & 2) != 0
      || ((*(__int64 (__fastcall **)(google::protobuf::MessageLite *))(*(_QWORD *)a3 + 48LL))(a3) & 1) != 0 )
    {
      return 1LL;
    }
    google::protobuf::MessageLite::LogInitializationErrorMessage(a3);
  }
  return 0LL;
}