-[ipp_request_t initWithOp:]
// local variable allocation has failed, the output may be wrong!
ipp_request_t *__cdecl -[ipp_request_t initWithOp:](ipp_request_t *self, SEL a2, unsigned __int16 a3)
{
  __int64 v3; // x19
  ipp_request_t *v4; // x0
  ipp_request_t *v5; // x20
  objc_super v7; // [xsp+0h] [xbp-30h] BYREF

  v3 = a3;
  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___ipp_request_t;
  v4 = -[ipp_t init](&v7, "init");
  v5 = v4;
  if ( v4 )
  {
    -[ipp_t setOp_or_status:](v4, "setOp_or_status:", v3);
    -[ipp_request_t _setupNewRequest](v5, "_setupNewRequest");
  }
  return v5;
}