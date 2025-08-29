-[ipp_collection_t encodeWithCoder:]
void __cdecl -[ipp_collection_t encodeWithCoder:](ipp_collection_t *self, SEL a2, id a3)
{
  objc_msgSend(a3, "encodeObject:forKey:", self->super._attrs, CFSTR("_attrs"));
}