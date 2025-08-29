-[IPPSession .cxx_destruct]
void __cdecl -[IPPSession .cxx_destruct](IPPSession *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_URLSession, 0LL);
  objc_storeStrong((id *)&self->_controlLogging, 0LL);
  objc_storeStrong((id *)&self->_clientBundleIdentifier, 0LL);
  objc_storeStrong((id *)&self->_workQueue, 0LL);
  objc_storeStrong((id *)&self->_sessionDelegate, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_operationQueue, 0LL);
}