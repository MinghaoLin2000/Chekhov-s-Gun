-[ipp_response_t status]
ipp_status_t __cdecl -[ipp_response_t status](ipp_response_t *self, SEL a2)
{
  return -[ipp_t op_or_status](self, "op_or_status");
}