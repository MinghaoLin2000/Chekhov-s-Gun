-[TSPPackage passwordVerifier]
NSData *__cdecl -[TSPPackage passwordVerifier](TSPPackage *self, SEL a2)
{
  return (NSData *)-[TSPPackage dataAtRelativePath:allowDecryption:error:](
                     self,
                     "dataAtRelativePath:allowDecryption:error:",
                     CFSTR(".iwpv2"),
                     0LL,
                     0LL);
}