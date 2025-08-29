-[TSPPackageWriter originalPackage]
TSPPackage *__cdecl -[TSPPackageWriter originalPackage](TSPPackageWriter *self, SEL a2)
{
  unsigned int v3; // w0
  __int64 v4; // x8
  id v5; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = -[TSPPackage packageIdentifier](self->_writtenPackage, "packageIdentifier");
  if ( v3 == 1 )
  {
    v4 = 16LL;
    goto LABEL_5;
  }
  if ( v3 == 2 )
  {
    v4 = 24LL;
LABEL_5:
    v5 = objc_retain(*(id *)((char *)&self->super.isa + v4));
    goto LABEL_7;
  }
  v5 = 0LL;
LABEL_7:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (TSPPackage *)objc_autoreleaseReturnValue(v5);
}