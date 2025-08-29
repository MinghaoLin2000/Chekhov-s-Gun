-[ClientRequest .cxx_destruct]
void __cdecl -[ClientRequest .cxx_destruct](ClientRequest *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_destroyWeak((id *)&self->_requestQueueEntry);
  objc_storeStrong((id *)&self->_cancellationReasonDebugDescription, 0LL);
  objc_storeStrong((id *)&self->_connectionIdentifier, 0LL);
  objc_destroyWeak((id *)&self->_connection);
  objc_storeStrong(&self->_imageClientReplyHandler, 0LL);
  objc_storeStrong(&self->_videoClientReplyHandler, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_requestTracker, 0LL);
}