-[TSUExtendedAttributeCollection hash]
unsigned __int64 __cdecl -[TSUExtendedAttributeCollection hash](TSUExtendedAttributeCollection *self, SEL a2)
{
  return (unsigned __int64)-[NSMutableDictionary hash](self->_attributes, "hash");
}