-[http_ipp_response_t ippStatus]
ipp_status_t __cdecl -[http_ipp_response_t ippStatus](http_ipp_response_t *self, SEL a2)
{
  ipp_response_t *ippResponse; // x0
  __int64 ivar_transportStatus; // x8

  ippResponse = self->_ippResponse;
  if ( ippResponse )
    return -[ipp_response_t status](ippResponse, "status");
  ivar_transportStatus = self->ivar_transportStatus;
  if ( (unsigned int)ivar_transportStatus > 6 )
    return 1280;
  else
    return dword_10006D4DC[ivar_transportStatus];
}