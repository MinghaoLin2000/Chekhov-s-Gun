__ZN6google8protobuf8internal10LogMessage6FinishEv
const char **__fastcall google::protobuf::internal::LogMessage::Finish(const char **this)
{
  const char **v1; // x19
  __int64 v2; // x0
  int v3; // w8
  void *exception; // x20

  v1 = this;
  if ( *(_DWORD *)this == 3 )
  {
    v2 = 3LL;
  }
  else
  {
    v3 = atomic_load((unsigned int *)&unk_1001F7F40);
    if ( v3 > 0 )
      goto LABEL_6;
    v2 = *(unsigned int *)this;
  }
  this = (const char **)off_1001F6E88(v2, v1[1], *((_DWORD *)v1 + 4), (__int64)(v1 + 3));
LABEL_6:
  if ( *(_DWORD *)v1 == 3 )
  {
    exception = __cxa_allocate_exception(0x30uLL);
    sub_1001181F4(exception, v1[1], *((unsigned int *)v1 + 4), v1 + 3);
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'google::protobuf::FatalException,
      (void (__fastcall *)(void *))google::protobuf::FatalException::~FatalException);
  }
  return this;
}