__ZN6google8protobuf8internal10LogMessageC1ENS0_8LogLevelEPKci
__int64 __fastcall google::protobuf::internal::LogMessage::LogMessage(__int64 result, int a2, __int64 a3, int a4)
{
  *(_DWORD *)result = a2;
  *(_QWORD *)(result + 8) = a3;
  *(_DWORD *)(result + 16) = a4;
  *(_QWORD *)(result + 32) = 0LL;
  *(_QWORD *)(result + 40) = 0LL;
  *(_QWORD *)(result + 24) = 0LL;
  return result;
}