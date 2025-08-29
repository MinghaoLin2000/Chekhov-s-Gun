-[http_ipp_response_t initWithResponse:transportStatus:]
http_ipp_response_t *__cdecl -[http_ipp_response_t initWithResponse:transportStatus:](
        http_ipp_response_t *self,
        SEL a2,
        id a3,
        int a4)
{
  id v7; // x19
  http_ipp_response_t *v8; // x0
  http_ipp_response_t *v9; // x22
  objc_super v11; // [xsp+0h] [xbp-30h] BYREF

  v7 = objc_retain(a3);
  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___http_ipp_response_t;
  v8 = -[http_ipp_response_t init](&v11, "init");
  v9 = v8;
  if ( v8 )
  {
    objc_storeStrong((id *)&v8->_ippResponse, a3);
    v9->ivar_transportStatus = a4;
  }
  objc_release(v7);
  return v9;
}