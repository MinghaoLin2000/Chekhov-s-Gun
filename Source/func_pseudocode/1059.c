-[DeviceStorageManagementViewController .cxx_destruct]
void __cdecl -[DeviceStorageManagementViewController .cxx_destruct](
        DeviceStorageManagementViewController *self,
        SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_workQueue, 0LL);
  objc_storeStrong((id *)&self->_dragDestinationURL, 0LL);
  objc_storeStrong((id *)&self->_mediaPickerViewController, 0LL);
  objc_storeStrong((id *)&self->_trackListViewController, 0LL);
  objc_storeStrong((id *)&self->_footerViewController, 0LL);
  objc_destroyWeak((id *)&self->_footerViewContainer);
  objc_destroyWeak((id *)&self->_trackListViewContainer);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_mediaPickerContainer);
}