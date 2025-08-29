-[DeviceFinderTabContainerViewController .cxx_destruct]
void __cdecl -[DeviceFinderTabContainerViewController .cxx_destruct](
        DeviceFinderTabContainerViewController *self,
        SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_queue, 0LL);
  objc_storeStrong((id *)&self->_tabViewControllersDictionary, 0LL);
  objc_storeStrong((id *)&self->_barChoices, 0LL);
  objc_storeStrong((id *)&self->_tabButtons, 0LL);
  objc_storeStrong((id *)&self->_fileSharingViewController, 0LL);
  objc_storeStrong((id *)&self->_deviceSummaryViewController, 0LL);
  objc_destroyWeak((id *)&self->_overflowPulldown);
  objc_destroyWeak((id *)&self->_tabView);
  objc_destroyWeak((id *)&self->_buttonBarHorizontalLine);
  objc_destroyWeak((id *)&self->_buttonBarStackView);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_buttonBarViewContainer);
}