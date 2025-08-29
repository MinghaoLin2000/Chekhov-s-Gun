-[DeviceUIServiceViewController .cxx_destruct]
void __cdecl -[DeviceUIServiceViewController .cxx_destruct](DeviceUIServiceViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_destroyWeak((id *)&self->_heightAnchor);
  objc_destroyWeak((id *)&self->_widthAnchor);
  objc_storeStrong((id *)&self->_scrollView, 0LL);
  objc_storeStrong((id *)&self->_currentMode, 0LL);
  objc_storeStrong((id *)&self->_currentController, 0LL);
  objc_storeStrong((id *)&self->_devicesClient, 0LL);
  objc_storeStrong((id *)&self->_mode, 0LL);
  objc_storeStrong((id *)&self->_deviceName, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_device, 0LL);
}