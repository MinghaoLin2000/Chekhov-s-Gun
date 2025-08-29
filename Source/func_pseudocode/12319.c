__ZN6google8protobuf8internal13VersionStringEi
__int64 *__usercall google::protobuf::internal::VersionString@<X0>(
        __int64 *__return_ptr a1@<X8>,
        google::protobuf::internal *this@<X0>)
{
  int v2; // w19
  char __str[128]; // [xsp+18h] [xbp-98h] BYREF

  v2 = (int)a1;
  snprintf(__str, 0x80uLL, "%d.%d.%d", (int)this / 1000000, (int)this / 1000 % 1000, (int)this % 1000);
  __str[127] = 0;
  return (__int64 *)sub_10007A754(v2, __str);
}