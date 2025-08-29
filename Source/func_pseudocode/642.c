-[DeviceSettingsBooksViewController .cxx_destruct]
void __cdecl -[DeviceSettingsBooksViewController .cxx_destruct](DeviceSettingsBooksViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_pdfNodesLookup, 0LL);
  objc_storeStrong((id *)&self->_pdfNodes, 0LL);
  objc_storeStrong((id *)&self->_bookNodesLookup, 0LL);
  objc_storeStrong((id *)&self->_bookNodes, 0LL);
  objc_destroyWeak((id *)&self->_tabView);
  objc_destroyWeak((id *)&self->_updateSelectedRadioButton);
  objc_destroyWeak((id *)&self->_allRadioButton);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_syncOntoCheckBox);
}