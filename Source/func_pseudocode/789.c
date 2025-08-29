-[DeviceSettingsInfoViewController .cxx_destruct]
void __cdecl -[DeviceSettingsInfoViewController .cxx_destruct](DeviceSettingsInfoViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_advancedViewController, 0LL);
  objc_storeStrong((id *)&self->_calendarsViewController, 0LL);
  objc_storeStrong((id *)&self->_contactsViewController, 0LL);
  objc_destroyWeak((id *)&self->_calendarsHorizontalLine);
  objc_destroyWeak((id *)&self->_advancedHorizontalLine);
  objc_destroyWeak((id *)&self->_calendarsContainerView);
  objc_destroyWeak((id *)&self->_contactsContainerView);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_advancedContainerView);
}