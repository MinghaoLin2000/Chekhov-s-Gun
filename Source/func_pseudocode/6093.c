-[PAMediaConversionServiceResourceURLCollection urlCount]
unsigned __int64 __cdecl -[PAMediaConversionServiceResourceURLCollection urlCount](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2)
{
  return (unsigned __int64)-[NSMutableDictionary count](self->_urlReferencesByRole, "count");
}