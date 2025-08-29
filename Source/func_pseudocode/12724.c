-[TSUExtendedAttribute hash]
unsigned __int64 __cdecl -[TSUExtendedAttribute hash](TSUExtendedAttribute *self, SEL a2)
{
  NSUInteger v3; // x20

  v3 = -[NSString hash](self->_name, "hash");
  return (unsigned __int64)-[NSData hash](self->_value, "hash") ^ v3;
}