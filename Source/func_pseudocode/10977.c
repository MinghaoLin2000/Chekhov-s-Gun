__ZZN6google8protobuf8internal16OnShutdownDeleteINS0_20FileDescriptorTablesEEEPT_S5_ENUlPKvE_8__invokeES7_
std::mutex *__fastcall google::protobuf::internal::OnShutdownDelete<google::protobuf::FileDescriptorTables>(google::protobuf::FileDescriptorTables *)::{lambda(void const*)#1}::__invoke(
        std::mutex *result)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( result )
  {
    google::protobuf::FileDescriptorTables::~FileDescriptorTables(result);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (std::mutex *)operator delete(v1, 0x10A0C40C644375CLL);
  }
  return result;
}