-[SiriNCService _notificationCenterOpened]
void __cdecl -[SiriNCService _notificationCenterOpened](SiriNCService *self, SEL a2)
{
  SiriUIDismissalOptions *v3; // x20
  SiriNCAlertViewController *v4; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  -[SiriNCService setNotificationCenterOpen:](self, "setNotificationCenterOpen:", 1LL);
  v3 = objc_retainAutoreleasedReturnValue(
         +[SiriUIDismissalOptions optionsWithDismissalReason:](
           &OBJC_CLASS___SiriUIDismissalOptions,
           "optionsWithDismissalReason:",
           15LL));
  if ( !-[SiriNCService breakoutState](self, "breakoutState") )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[SiriNCService alertViewController](self, "alertViewController"));
    -[SiriNCAlertViewController dismissController:dismissalOptions:](
      v4,
      "dismissController:dismissalOptions:",
      self,
      v3);
    objc_release(v4);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}