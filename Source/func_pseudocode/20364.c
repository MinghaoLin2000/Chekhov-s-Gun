-[IPPControlLogging onQueueAsyncIfPreserving:]
void __cdecl -[IPPControlLogging onQueueAsyncIfPreserving:](IPPControlLogging *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( qword_1000C3F60 != -1 )
    dispatch_once(&qword_1000C3F60, &stru_10009EFC8);
  if ( self->_controlFilePath )
    dispatch_async((dispatch_queue_t)qword_1000C3F58, v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}