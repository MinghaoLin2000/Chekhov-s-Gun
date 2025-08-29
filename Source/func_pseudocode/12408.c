__ZN6google8protobuf8internal14ArenaStringPtr12SetAllocatedEPKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPS9_PNS0_5ArenaE
_QWORD *__fastcall google::protobuf::internal::ArenaStringPtr::SetAllocated(
        _QWORD *result,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // x20
  __int64 v7; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = result;
  if ( !a4 )
  {
    v7 = *result;
    if ( *result != a2 )
    {
      if ( *(char *)(v7 + 23) < 0 )
        operator delete(*(void **)v7);
      result = (_QWORD *)operator delete(v7, 0x1012C40EC159624LL);
    }
    if ( a3 )
    {
      *v6 = a3;
      return result;
    }
    goto LABEL_12;
  }
  if ( !a3 )
  {
LABEL_12:
    *v6 = a2;
    return result;
  }
  *result = a3;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (_QWORD *)sub_1000E82B0(a4, a3);
}