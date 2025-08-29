-[device_http_t description]
id __cdecl -[device_http_t description](device_http_t *self, SEL a2)
{
  const char *v2; // x10
  const char *v3; // x11

  v2 = " (streaming)";
  if ( !self->_streamedPrinterEndpoint )
    v2 = "";
  if ( self->_streamedPrinterEndpointConnectionLostForWriting )
    v3 = " (no longer  writable)";
  else
    v3 = " (writable)";
  return +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("device_http<%p> { %@%s%s}"),
           self,
           self->_printerURL,
           v2,
           v3);
}