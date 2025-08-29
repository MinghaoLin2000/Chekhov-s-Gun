__ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPh
__int64 __fastcall google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliasedOutline(
        google::protobuf::io::EpsCopyOutputStream *this,
        __int64 a2,
        __int64 *a3,
        unsigned __int8 *a4)
{
  __int64 v7; // x22
  unsigned __int8 *v8; // x3
  __int64 v9; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( *(_QWORD *)this <= (unsigned __int64)a4 )
    google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(this, a4);
  if ( *((char *)a3 + 23) >= 0 )
    v7 = *((unsigned __int8 *)a3 + 23);
  else
    v7 = *((unsigned int *)a3 + 2);
  v8 = (unsigned __int8 *)sub_100054668(this, a2, v7);
  if ( *((char *)a3 + 23) >= 0 )
    LODWORD(v9) = (_DWORD)a3;
  else
    v9 = *a3;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_1000E5BE0((int)this, v9, v7, v8);
}