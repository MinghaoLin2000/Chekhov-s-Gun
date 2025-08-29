__ZNK6google8protobuf14FileDescriptor17GetSourceLocationERKNSt3__16vectorIiNS2_9allocatorIiEEEEPNS0_14SourceLocationE
__int64 __fastcall google::protobuf::FileDescriptor::GetSourceLocation(__int64 a1, int a2, __int64 a3)
{
  google::protobuf::internal::LogMessage *v6; // x0
  __int64 v7; // x2
  __int64 result; // x0
  __int64 v9; // x20
  int v10; // w8
  _DWORD *v11; // x10
  __int64 v12; // x8
  int v13; // w1
  char v14; // [xsp+Fh] [xbp-51h] BYREF
  _BYTE v15[48]; // [xsp+10h] [xbp-50h] BYREF

  if ( !a3 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v15,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      2963LL);
    v6 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v15,
                                                     "CHECK failed: out_location != nullptr: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v14, v6);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v15);
  }
  v7 = *(_QWORD *)(a1 + 152);
  if ( !v7 )
    return 0LL;
  result = google::protobuf::FileDescriptorTables::GetSourceLocation(*(_QWORD *)(a1 + 144), a2, v7);
  if ( !result )
    return result;
  v9 = result;
  v10 = *(_DWORD *)(result + 48);
  if ( (unsigned int)(v10 - 3) >= 2 )
    return 0LL;
  v11 = *(_DWORD **)(result + 56);
  *(_DWORD *)a3 = *v11;
  *(_DWORD *)(a3 + 8) = v11[1];
  *(_DWORD *)(a3 + 4) = v11[2 * (v10 != 3)];
  *(_DWORD *)(a3 + 12) = v11[v10 - 1];
  std::string::operator=(
    (std::string *)(a3 + 16),
    (const std::string *)(*(_QWORD *)(result + 96) & 0xFFFFFFFFFFFFFFFELL));
  std::string::operator=((std::string *)(a3 + 40), (const std::string *)(*(_QWORD *)(v9 + 104) & 0xFFFFFFFFFFFFFFFELL));
  v12 = *(_QWORD *)(v9 + 88);
  if ( v12 )
    v13 = v12 + 8;
  else
    v13 = 0;
  sub_10009C388(a3 + 64, v13, v13 + 8 * *(_DWORD *)(v9 + 80));
  return 1LL;
}