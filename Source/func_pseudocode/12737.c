-[TSUExtendedAttributeCollection allAttributes]
id __cdecl -[TSUExtendedAttributeCollection allAttributes](TSUExtendedAttributeCollection *self, SEL a2)
{
  return -[NSMutableDictionary allValues](self->_attributes, "allValues");
}