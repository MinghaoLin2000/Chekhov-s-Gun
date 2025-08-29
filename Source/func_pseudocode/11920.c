__ZN6google8protobuf8internal18GenericTypeHandlerINS0_7MessageEE8GetArenaEPS3_
unsigned __int64 __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::GetArena(
        __int64 a1)
{
  __int64 v1; // x8
  unsigned __int64 result; // x0

  v1 = *(_QWORD *)(a1 + 8);
  result = v1 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v1 & 1) != 0 )
    return *(_QWORD *)result;
  return result;
}