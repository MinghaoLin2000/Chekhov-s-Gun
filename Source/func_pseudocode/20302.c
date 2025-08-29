-[ipp_request_t _descriptionLeader]
id __cdecl -[ipp_request_t _descriptionLeader](ipp_request_t *self, SEL a2)
{
  __int64 request_id; // x22
  unsigned int v4; // w21
  id v5; // x19
  NSString *v6; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  request_id = self->super._request_id;
  v4 = -[ipp_t op_or_status](self, "op_or_status");
  v5 = objc_retainAutoreleasedReturnValue(-[ipp_request_t opString](self, "opString"));
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("<ID#%d(%d - %@)>"),
           request_id,
           v4,
           v5));
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}