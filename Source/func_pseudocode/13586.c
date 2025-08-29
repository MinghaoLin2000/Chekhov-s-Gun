+[SFUCryptoUtils ivLengthForKey:]
unsigned int __cdecl +[SFUCryptoUtils ivLengthForKey:](id a1, SEL a2, id a3)
{
  return 16 * ((unsigned int)objc_msgSend(a3, "keyType") == 0);
}