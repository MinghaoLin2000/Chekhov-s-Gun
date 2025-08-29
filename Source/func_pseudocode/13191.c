-[SFUCryptor initWithKey:operation:iv:ivLength:]
// local variable allocation has failed, the output may be wrong!
SFUCryptor *__cdecl -[SFUCryptor initWithKey:operation:iv:ivLength:](
        SFUCryptor *self,
        SEL a2,
        id a3,
        int a4,
        const char *a5,
        unsigned __int64 a6)
{
  return -[SFUCryptor initWithKey:operation:iv:ivLength:usePKCS7Padding:](
           self,
           "initWithKey:operation:iv:ivLength:usePKCS7Padding:",
           a3,
           *(_QWORD *)&a4,
           a5,
           a6,
           1LL);
}