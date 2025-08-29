-[SFUCryptor cryptDataFromBuffer:length:toStream:finished:error:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[SFUCryptor cryptDataFromBuffer:length:toStream:finished:error:](
        SFUCryptor *self,
        SEL a2,
        const char *a3,
        unsigned __int64 a4,
        id a5,
        bool a6,
        id *a7)
{
  return -[SFUCryptor cryptDataFromBuffer:length:toStream:finished:crc32:error:](
           self,
           "cryptDataFromBuffer:length:toStream:finished:crc32:error:",
           a3,
           a4,
           a5,
           a6,
           0LL,
           a7);
}