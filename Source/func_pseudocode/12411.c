__ZN6google8protobuf8internal14ArenaStringPtr12ClearToEmptyEv
_QWORD *__fastcall google::protobuf::internal::ArenaStringPtr::ClearToEmpty(_QWORD *this)
{
  unsigned __int64 v1; // x8

  if ( (__int64 *)*this != &google::protobuf::internal::fixed_address_empty_string )
  {
    v1 = *this & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v1 + 23) < 0 )
    {
      **(_BYTE **)v1 = 0;
      *(_QWORD *)(v1 + 8) = 0LL;
    }
    else
    {
      *(_BYTE *)v1 = 0;
      *(_BYTE *)(v1 + 23) = 0;
    }
  }
  return this;
}