-[ipp_t mutableCopy]
id __cdecl -[ipp_t mutableCopy](ipp_t *self, SEL a2)
{
  return -[ipp_t copyWithZone:](self, "copyWithZone:", 0LL);
}