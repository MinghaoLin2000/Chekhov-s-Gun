-[RemoteViewBridgeServiceViewService .cxx_destruct]
void __cdecl -[RemoteViewBridgeServiceViewService .cxx_destruct](RemoteViewBridgeServiceViewService *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_widthConstraint, 0LL);
  objc_storeStrong((id *)&self->_heightConstraint, 0LL);
  objc_storeStrong((id *)&self->_maximumWidthConstraint, 0LL);
  objc_storeStrong((id *)&self->_maximumHeightConstraint, 0LL);
  objc_storeStrong((id *)&self->_serviceWindow, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_rootContainer, 0LL);
}