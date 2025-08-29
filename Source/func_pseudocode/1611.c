-[DeviceFooterViewController .cxx_destruct]
void __cdecl -[DeviceFooterViewController .cxx_destruct](DeviceFooterViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_destroyWeak(&self->_previousSecondaryButtonTarget);
  objc_storeStrong((id *)&self->_previousSecondaryButtonTitle, 0LL);
  objc_storeStrong((id *)&self->_lastSecondaryProgressDescriptionString, 0LL);
  objc_storeStrong((id *)&self->_lastPrimaryProgressDescriptionString, 0LL);
  objc_storeStrong((id *)&self->_deviceTotals, 0LL);
  objc_storeStrong((id *)&self->_progressBarViewTrailingConstraint, 0LL);
  objc_storeStrong((id *)&self->_capacityViewTrailingConstraint, 0LL);
  objc_destroyWeak((id *)&self->_secondaryButton);
  objc_destroyWeak((id *)&self->_primaryButton);
  objc_destroyWeak((id *)&self->_buttonStack);
  objc_storeStrong((id *)&self->_progressTextField, 0LL);
  objc_storeStrong((id *)&self->_progressBarViewController, 0LL);
  objc_storeStrong((id *)&self->_capacityBarViewController, 0LL);
  objc_storeStrong((id *)&self->_secondaryProgress, 0LL);
  objc_storeStrong((id *)&self->_primaryProgress, 0LL);
  objc_destroyWeak(&self->_secondaryButtonTarget);
  objc_destroyWeak(&self->_primaryButtonTarget);
  objc_storeStrong((id *)&self->_secondaryButtonTitle, 0LL);
  objc_storeStrong((id *)&self->_primaryButtonTitle, 0LL);
  objc_storeStrong((id *)&self->_secondaryButtonKeyEquivalent, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_primaryButtonKeyEquivalent, 0LL);
}