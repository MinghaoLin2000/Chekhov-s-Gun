__ZN6google8protobuf2io19EpsCopyOutputStream16WriteRawFallbackEPKviPh
unsigned __int8 *__fastcall google::protobuf::io::EpsCopyOutputStream::WriteRawFallback(
        google::protobuf::io::EpsCopyOutputStream *this,
        char *__src,
        int a3,
        unsigned __int8 *__dst)
{
  unsigned __int8 *v4; // x21
  int v5; // w19
  int v7; // w23

  v4 = __dst;
  v5 = a3;
  v7 = *(_DWORD *)this - (_DWORD)__dst + 16;
  if ( v7 < a3 )
  {
    do
    {
      memcpy(v4, __src, v7);
      v5 -= v7;
      __src += v7;
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(this, &v4[v7]);
      v7 = *(_DWORD *)this - (_DWORD)v4 + 16;
    }
    while ( v5 > v7 );
  }
  memcpy(v4, __src, v5);
  return &v4[v5];
}