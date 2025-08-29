__ZN6google8protobuf2io19EpsCopyOutputStream15WriteAliasedRawEPKviPh
unsigned __int8 *__fastcall google::protobuf::io::EpsCopyOutputStream::WriteAliasedRaw(
        google::protobuf::io::EpsCopyOutputStream *this,
        void *__src,
        __int64 a3,
        unsigned __int8 *__dst)
{
  __int64 v8; // x8
  unsigned __int8 *v9; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = *(_QWORD *)this - (_QWORD)__dst;
  if ( v8 + 16 <= (int)a3 )
  {
    v9 = google::protobuf::io::EpsCopyOutputStream::Trim(this, __dst);
    if ( ((*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 6) + 40LL))(
            *((_QWORD *)this + 6),
            __src,
            a3) & 1) == 0 )
    {
      *((_BYTE *)this + 56) = 1;
      v9 = (unsigned __int8 *)this + 16;
      *(_QWORD *)this = (char *)this + 32;
    }
    return v9;
  }
  if ( v8 >= (int)a3 )
  {
    memcpy(__dst, __src, (int)a3);
    return &__dst[(int)a3];
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return google::protobuf::io::EpsCopyOutputStream::WriteRawFallback(this, (char *)__src, a3, __dst);
}