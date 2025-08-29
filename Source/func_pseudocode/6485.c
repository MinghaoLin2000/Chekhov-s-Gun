-[VideoConversionService cancelJobsForConnectionWithIdentifier:]
void __cdecl -[VideoConversionService cancelJobsForConnectionWithIdentifier:](
        VideoConversionService *self,
        SEL a2,
        id a3)
{
  MediaConversionQueue *requestQueue; // x19
  void *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  requestQueue = self->_requestQueue;
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "UUIDString"));
  -[MediaConversionQueue cancelRequestsForConnectionIdentifier:](
    requestQueue,
    "cancelRequestsForConnectionIdentifier:",
    v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}