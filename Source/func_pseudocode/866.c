-[AMPCapacityBarCategory sizeString]
id __cdecl -[AMPCapacityBarCategory sizeString](AMPCapacityBarCategory *self, SEL a2)
{
  return (id)NSLocalizedFileSizeDescription(self->_value, 0LL, 0LL);
}