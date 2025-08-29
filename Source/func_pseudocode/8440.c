-[_KHSoftwareUpdateControllerContext .cxx_destruct]
void __cdecl -[_KHSoftwareUpdateControllerContext .cxx_destruct](_KHSoftwareUpdateControllerContext *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_completionHandlers, 0LL);
  objc_storeStrong((id *)&self->_sessionIdentifier, 0LL);
  objc_storeStrong((id *)&self->_metadata, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_tags, 0LL);
}