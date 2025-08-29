-[ipp_value_t setUnknown:]
void __cdecl -[ipp_value_t setUnknown:](ipp_value_t *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->x_payload, a3);
}