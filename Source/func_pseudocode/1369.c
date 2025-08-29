-[DeviceModeMediaViewController .cxx_destruct]
void __cdecl -[DeviceModeMediaViewController .cxx_destruct](DeviceModeMediaViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_trackListViewController, 0LL);
  objc_storeStrong((id *)&self->_originalSyncPrefs, 0LL);
  objc_storeStrong((id *)&self->_autofillPlacardViewController, 0LL);
  objc_storeStrong((id *)&self->_settingsController, 0LL);
  objc_storeStrong((id *)&self->_headerViewController, 0LL);
  objc_storeStrong((id *)&self->_footerViewController, 0LL);
  objc_storeStrong((id *)&self->_contentController, 0LL);
  objc_storeStrong((id *)&self->_deviceNotConfiguredViewController, 0LL);
  objc_storeStrong((id *)&self->_loadingViewController, 0LL);
  objc_storeStrong((id *)&self->_contentView, 0LL);
  objc_destroyWeak((id *)&self->_autofillPlacardViewContainer);
  objc_destroyWeak((id *)&self->_footerViewContainer);
  objc_destroyWeak((id *)&self->_headerViewContainer);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_contentViewContainer);
}