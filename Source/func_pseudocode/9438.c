-[TSPPackage isPasswordProtected]
bool __cdecl -[TSPPackage isPasswordProtected](TSPPackage *self, SEL a2)
{
  return -[TSPPackage hasDataAtRelativePath:](self, "hasDataAtRelativePath:", CFSTR(".iwpv2"));
}