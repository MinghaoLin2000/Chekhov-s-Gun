-[http_ipp_response_t description]
id __cdecl -[http_ipp_response_t description](http_ipp_response_t *self, SEL a2)
{
  __CFString *v3; // x19
  ipp_response_t *ippResponse; // x22
  __int64 v5; // x0
  const char *v6; // x8
  NSString *v7; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(toString((unsigned int)self->ivar_transportStatus));
  ippResponse = self->_ippResponse;
  v5 = -[http_ipp_response_t ippStatus](self, "ippStatus");
  v6 = "";
  if ( !ippResponse )
    v6 = "(nil) ";
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("<http %@, ipp status %s%x>"),
           v3,
           v6,
           v5));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}