-[ipp_value_t encodeWithCoder:]
void __cdecl -[ipp_value_t encodeWithCoder:](ipp_value_t *self, SEL a2, id a3)
{
  objc_msgSend(a3, "encodeObject:forKey:", self->x_payload, CFSTR("_payload"));
}