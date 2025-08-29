-[ipp_response_t _descriptionLeader]
id __cdecl -[ipp_response_t _descriptionLeader](ipp_response_t *self, SEL a2)
{
  return +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("<ID#%d, status 0x%4.4x>"),
           self->super._request_id,
           -[ipp_t op_or_status](self, "op_or_status"));
}