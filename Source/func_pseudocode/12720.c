-[TSUExtendedAttribute shouldPreserveForIntent:]
bool __cdecl -[TSUExtendedAttribute shouldPreserveForIntent:](TSUExtendedAttribute *self, SEL a2, unsigned int a3)
{
  const char *v4; // x0

  v4 = -[NSString UTF8String](self->_name, "UTF8String");
  if ( v4 )
    LOBYTE(v4) = xattr_preserve_for_intent(v4, a3) != 0;
  return (char)v4;
}