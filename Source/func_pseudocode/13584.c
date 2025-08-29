+[SFUCryptoUtils generateRandomSaltWithLength:]
id __cdecl +[SFUCryptoUtils generateRandomSaltWithLength:](id a1, SEL a2, unsigned __int64 a3)
{
  void *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = malloc_type_calloc(a3, 1uLL, 0x100004077774924uLL);
  if ( SecRandomCopyBytes(kSecRandomDefault, a3, v4) )
  {
    free(v4);
    return 0LL;
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return +[NSData dataWithBytesNoCopy:length:freeWhenDone:](
             &OBJC_CLASS___NSData,
             "dataWithBytesNoCopy:length:freeWhenDone:",
             v4,
             a3,
             1LL);
  }
}