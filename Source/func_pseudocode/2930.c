-[DeviceSummaryViewController .cxx_destruct]
void __cdecl -[DeviceSummaryViewController .cxx_destruct](DeviceSummaryViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_viewControllers, 0LL);
  objc_storeStrong((id *)&self->_backUpSettingsViewController, 0LL);
  objc_storeStrong((id *)&self->_moreIdentifiersViewController, 0LL);
  objc_storeStrong((id *)&self->_softwareUpdatesViewController, 0LL);
  objc_storeStrong((id *)&self->_optionsViewController, 0LL);
  objc_destroyWeak((id *)&self->_softwareUpdatesHorizontalLine);
  objc_destroyWeak((id *)&self->_moreIdentifiersHorizontalLine);
  objc_destroyWeak((id *)&self->_backupHorizontalLine);
  objc_destroyWeak((id *)&self->_backUpSettingsContainerView);
  objc_destroyWeak((id *)&self->_moreIdentifiersContainerView);
  objc_destroyWeak((id *)&self->_softwareUpdatesContainerView);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_optionsContainerView);
}