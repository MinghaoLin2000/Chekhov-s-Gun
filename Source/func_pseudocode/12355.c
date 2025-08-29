__ZN6google8protobuf2io19EpsCopyOutputStream18WriteStringOutlineEjRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPh
unsigned __int8 *__fastcall google::protobuf::io::EpsCopyOutputStream::WriteStringOutline(
        google::protobuf::io::EpsCopyOutputStream *this,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  __int64 v7; // x22
  unsigned __int8 *v8; // x0
  unsigned __int8 *v9; // x21
  char *v10; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( *(_QWORD *)this <= (unsigned __int64)a4 )
    google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(this, a4);
  if ( *(char *)(a3 + 23) >= 0 )
    v7 = *(unsigned __int8 *)(a3 + 23);
  else
    v7 = *(_QWORD *)(a3 + 8);
  v8 = (unsigned __int8 *)sub_100054668(this, a2, v7);
  v9 = v8;
  if ( *(char *)(a3 + 23) >= 0 )
    v10 = (char *)a3;
  else
    v10 = *(char **)a3;
  if ( *(_QWORD *)this - (_QWORD)v8 < (int)v7 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::io::EpsCopyOutputStream::WriteRawFallback(this, v10, v7, v8);
  }
  else
  {
    memcpy(v8, v10, (int)v7);
    return &v9[(int)v7];
  }
}