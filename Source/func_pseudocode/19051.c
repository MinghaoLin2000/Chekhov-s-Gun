-[SiriNCAlertViewController _notificationWindowTransferred]
bool __cdecl -[SiriNCAlertViewController _notificationWindowTransferred](SiriNCAlertViewController *self, SEL a2)
{
  int v3; // w0

  v3 = AFDeviceSupportsSystemAssistantExperience(self);
  if ( v3 )
    LOBYTE(v3) = (_os_feature_enabled_impl("SiriUI", "windowed_launch") & 1) == 0 && self->_ncBreakOutState == 2;
  return v3;
}