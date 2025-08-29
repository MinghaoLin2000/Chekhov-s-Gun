-[TSPPackage passwordHint]
NSString *__cdecl -[TSPPackage passwordHint](TSPPackage *self, SEL a2)
{
  id v2; // x19
  id v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(
         -[TSPPackage dataAtRelativePath:allowDecryption:error:](
           self,
           "dataAtRelativePath:allowDecryption:error:",
           CFSTR(".iwph"),
           0LL,
           0LL));
  v3 = objc_retainAutoreleasedReturnValue(+[SFUCryptoUtils decodePassphraseHint:](&OBJC_CLASS___SFUCryptoUtils, "decodePassphraseHint:", v2));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v3);
}