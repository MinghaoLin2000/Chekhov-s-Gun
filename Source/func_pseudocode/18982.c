-[SiriNCAlertViewController _siriMinimumHeight]
double __cdecl -[SiriNCAlertViewController _siriMinimumHeight](SiriNCAlertViewController *self, SEL a2)
{
  if ( (unsigned int)AFDeviceSupportsSystemAssistantExperience(self) )
    return SiriUICloseButtonPadding + SiriUIDefaultTextFieldHeight + SiriUISAEFixedPositionBottomPadding;
  else
    return dbl_100017A00[+[AFUISiriSession availabilityState](&OBJC_CLASS___AFUISiriSession, "availabilityState") == 0LL];
}