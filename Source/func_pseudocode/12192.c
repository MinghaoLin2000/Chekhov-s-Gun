__ZN6google8protobuf2io9TokenizerD2Ev
void __fastcall google::protobuf::io::Tokenizer::~Tokenizer(google::protobuf::io::Tokenizer *this)
{
  int v2; // w8
  int v3; // w9

  v2 = *((_DWORD *)this + 32);
  v3 = *((_DWORD *)this + 33);
  if ( v2 > v3 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 12) + 24LL))(
      *((_QWORD *)this + 12),
      (unsigned int)(v2 - v3));
  if ( *((char *)this + 79) < 0 )
    operator delete(*((void **)this + 7));
  if ( *((char *)this + 31) < 0 )
    operator delete(*((void **)this + 1));
}