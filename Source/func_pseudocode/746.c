-[DeviceModeUnpairedViewController .cxx_destruct]
void __cdecl -[DeviceModeUnpairedViewController .cxx_destruct](DeviceModeUnpairedViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_headerViewController, 0LL);
  objc_storeStrong((id *)&self->_pairSpinnerTimer, 0LL);
  objc_destroyWeak((id *)&self->_headerViewContainer);
  objc_destroyWeak((id *)&self->_pairSpinner);
  objc_destroyWeak((id *)&self->_errorLabel);
  objc_destroyWeak((id *)&self->_pairButton);
  objc_destroyWeak((id *)&self->_pairLabel);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_pairTitleLabel);
}