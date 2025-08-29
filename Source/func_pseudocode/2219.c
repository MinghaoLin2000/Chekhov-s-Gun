-[TrackListViewController .cxx_destruct]
void __cdecl -[TrackListViewController .cxx_destruct](TrackListViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_deviceDragHandler, 0LL);
  objc_storeStrong((id *)&self->_items, 0LL);
  objc_storeStrong((id *)&self->_devicesClient, 0LL);
  objc_storeStrong((id *)&self->_device, 0LL);
  objc_storeStrong(&self->_deleteKeyHitAction, 0LL);
  objc_storeStrong(&self->_selectionDidChangeAction, 0LL);
  objc_storeStrong((id *)&self->_accessibilityTitle, 0LL);
  objc_storeStrong((id *)&self->_playlist, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_tableView);
}