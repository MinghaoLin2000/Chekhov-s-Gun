+[SFUCryptoUtils iterationCountFromPassphraseVerifier:]
unsigned int __cdecl +[SFUCryptoUtils iterationCountFromPassphraseVerifier:](id a1, SEL a2, id a3)
{
  SFUMemoryInputStream *v5; // x19
  void *v6; // x20
  unsigned int v8; // [xsp+Ch] [xbp-24h] BYREF

  v5 = -[SFUMemoryInputStream initWithData:](objc_alloc(&OBJC_CLASS___SFUMemoryInputStream), "initWithData:", a3);
  if ( ((unsigned int)objc_msgSend(
                        (id)objc_opt_class(a1),
                        "isEncryptionVersionAndFormatSupportedInPassphraseVerifier:",
                        a3) & 1) != 0 )
  {
    -[SFUMemoryInputStream seekToOffset:](v5, "seekToOffset:", 4LL);
    v8 = 0;
    v6 = -[SFUMemoryInputStream readToBuffer:size:](v5, "readToBuffer:size:", &v8, 4LL);
    objc_release(v5);
    if ( v6 == (void *)4 )
      return v8;
    else
      return 0;
  }
  else
  {
    objc_release(v5);
    return 0;
  }
}