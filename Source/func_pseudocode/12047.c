__ZN6google8protobuf11safe_strtofEPKcPf
bool __fastcall google::protobuf::safe_strtof(google::protobuf *this, float *a2, float *a3)
{
  char *v6; // [xsp+8h] [xbp-18h] BYREF

  v6 = 0LL;
  *__error() = 0;
  *a2 = strtof((const char *)this, &v6);
  return *(_BYTE *)this && !*v6 && *__error() == 0;
}