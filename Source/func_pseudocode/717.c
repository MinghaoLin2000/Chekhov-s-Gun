-[DeviceFileSharingViewController .cxx_destruct]
void __cdecl -[DeviceFileSharingViewController .cxx_destruct](DeviceFileSharingViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_refreshingListItem, 0LL);
  objc_storeStrong((id *)&self->_draggedItems, 0LL);
  objc_storeStrong((id *)&self->_fileSharingAppItems, 0LL);
  objc_storeStrong((id *)&self->_fileSharingApps, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_outlineView);
}