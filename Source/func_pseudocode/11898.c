__ZN6google8protobuf8internal32StringSpaceUsedExcludingSelfLongERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
__int64 __fastcall google::protobuf::internal::StringSpaceUsedExcludingSelfLong(unsigned __int64 a1)
{
  bool v1; // cf

  if ( *(char *)(a1 + 23) < 0 && (*(_QWORD *)a1 >= a1 ? (v1 = *(_QWORD *)a1 >= a1 + 24) : (v1 = 1), v1) )
    return (*(_QWORD *)(a1 + 16) & 0x7FFFFFFFFFFFFFFFLL) - 1;
  else
    return 0LL;
}