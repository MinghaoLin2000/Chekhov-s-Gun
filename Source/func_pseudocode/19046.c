-[SiriNCAlertViewController handleInvocationCancel:]
bool __cdecl -[SiriNCAlertViewController handleInvocationCancel:](
        SiriNCAlertViewController *self,
        SEL a2,
        signed __int64 a3)
{
  int v5; // w22
  AFUISiriViewController *v6; // x0
  AFUISiriViewController *v7; // x21
  AFUISiriViewController *v8; // x22
  unsigned int v9; // w23
  void *v10; // x20
  char *v11; // x22
  AFUISiriViewController *v12; // x20
  double v13; // d0
  double v14; // d8
  double v15; // d0
  __int64 v16; // x2
  AFUISiriViewController *v17; // x20
  unsigned int v18; // w21
  SiriUIDismissalOptions *v19; // x20

  v5 = AFDeviceSupportsSystemAssistantExperience(self);
  v6 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  v7 = v6;
  if ( v5 )
  {
    if ( (unsigned int)-[AFUISiriViewController isVisible](v6, "isVisible") )
    {
      v8 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
      v9 = (unsigned int)-[AFUISiriViewController isWindowed](v8, "isWindowed") ^ 1;
      objc_release(v8);
    }
    else
    {
      v9 = 0;
    }
    objc_release(v7);
    if ( a3 == 15 )
    {
      v17 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
      v18 = (unsigned int)-[AFUISiriViewController isShowingTalkModeUI](v17, "isShowingTalkModeUI");
    }
    else
    {
      if ( a3 != 1 )
        return 0;
      v17 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
      v18 = (unsigned int)-[AFUISiriViewController isShowingTalkModeUI](v17, "isShowingTalkModeUI") ^ 1;
    }
    objc_release(v17);
    if ( (v9 & v18 & 1) != 0 )
    {
      v16 = 7LL;
      goto LABEL_14;
    }
  }
  else
  {
    v10 = objc_retainAutoreleasedReturnValue(-[AFUISiriViewController view](v6, "view"));
    v11 = (char *)objc_msgSend(v10, "siriSessionState");
    objc_release(v10);
    objc_release(v7);
    v12 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
    -[AFUISiriViewController contentHeight](v12, "contentHeight");
    v14 = v13;
    objc_release(v12);
    if ( (unsigned __int64)(v11 - 1) <= 1 )
    {
      -[SiriNCAlertViewController _siriMinimumHeight](self, "_siriMinimumHeight");
      if ( v14 <= v15 )
      {
        v16 = 16LL;
LABEL_14:
        v19 = objc_retainAutoreleasedReturnValue(
                +[SiriUIDismissalOptions optionsWithDismissalReason:](
                  &OBJC_CLASS___SiriUIDismissalOptions,
                  "optionsWithDismissalReason:",
                  v16));
        -[SiriNCAlertViewController dismissController:dismissalOptions:](
          self,
          "dismissController:dismissalOptions:",
          self,
          v19);
        objc_release(v19);
        return 1;
      }
    }
  }
  return 0;
}