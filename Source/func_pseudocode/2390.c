-[DeviceModeFinderViewController .cxx_destruct]
void __cdecl -[DeviceModeFinderViewController .cxx_destruct](DeviceModeFinderViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_deviceDragHandler, 0LL);
  objc_storeStrong((id *)&self->_originalSyncPrefs, 0LL);
  objc_storeStrong((id *)&self->_dirtyViewControllers, 0LL);
  objc_storeStrong((id *)&self->_contentView, 0LL);
  objc_storeStrong((id *)&self->_progressViewController, 0LL);
  objc_storeStrong((id *)&self->_loadingViewController, 0LL);
  objc_storeStrong((id *)&self->_footerViewController, 0LL);
  objc_storeStrong((id *)&self->_finderTabContainerViewController, 0LL);
  objc_storeStrong((id *)&self->_headerViewController, 0LL);
  objc_storeStrong((id *)&self->_setupViewController, 0LL);
  objc_destroyWeak((id *)&self->_footerViewContainer);
  objc_destroyWeak((id *)&self->_contentViewContainer);
  objc_destroyWeak((id *)&self->_deviceInfoContainer);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_headerViewContainer);
}