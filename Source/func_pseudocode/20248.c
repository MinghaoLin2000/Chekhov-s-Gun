-[ipp_attribute_t toss_last_value]
void __cdecl -[ipp_attribute_t toss_last_value](ipp_attribute_t *self, SEL a2)
{
  -[NSMutableArray removeLastObject](self->_values, "removeLastObject");
}