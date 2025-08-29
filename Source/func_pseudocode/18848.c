-[RemoteViewController .cxx_destruct]
void __cdecl -[RemoteViewController .cxx_destruct](RemoteViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_widthConstraint, 0LL);
  objc_storeStrong((id *)&self->_heightConstraint, 0LL);
  objc_storeStrong((id *)&self->_contentView, 0LL);
  objc_storeStrong((id *)&self->_serviceIdentifier, 0LL);
  objc_storeStrong((id *)&self->_remoteViewController, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_remoteViewIdentifier, 0LL);
}