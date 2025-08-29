-[ipp_attribute_t num_values]
unsigned __int64 __cdecl -[ipp_attribute_t num_values](ipp_attribute_t *self, SEL a2)
{
  return (unsigned __int64)-[NSMutableArray count](self->_values, "count");
}