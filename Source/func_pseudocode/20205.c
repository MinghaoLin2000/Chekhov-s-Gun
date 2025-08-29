-[ipp_value_t copyWithZone:]
id __cdecl -[ipp_value_t copyWithZone:](ipp_value_t *self, SEL a2, _NSZone *a3)
{
  id *v4; // x20

  v4 = (id *)objc_alloc_init((Class)objc_opt_class(self, a2));
  objc_storeStrong(v4 + 1, self->x_payload);
  return v4;
}