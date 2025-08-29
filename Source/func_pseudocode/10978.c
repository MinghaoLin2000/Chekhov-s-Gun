__ZZN6google8protobuf8internal16OnShutdownDeleteINSt3__13setINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS3_4lessISA_EENS8_ISA_EEEEEEPT_SG_ENUlPKvE_8__invokeESI_
__int64 __fastcall google::protobuf::internal::OnShutdownDelete<std::set<std::string>>(std::set<std::string> *)::{lambda(void const*)#1}::__invoke(
        __int64 result)
{
  __int64 v1; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( result )
  {
    v1 = result;
    sub_10009BDBC(result, *(_QWORD *)(result + 8));
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return operator delete(v1, 0x1020C4062D53EE8LL);
  }
  return result;
}