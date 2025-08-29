-[SiriNCAlertViewController handleUserCancel]
bool __cdecl -[SiriNCAlertViewController handleUserCancel](SiriNCAlertViewController *self, SEL a2)
{
  NSProcessInfo *v3; // x20
  double v4; // d0
  double v5; // d8
  AFUISiriViewController *v6; // x20
  void *v7; // x21
  char *v8; // x22
  AFUISiriViewController *v9; // x20
  double v10; // d0
  double v11; // d9
  double v12; // d0
  AFUISiriViewController *v13; // x19

  v3 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
  -[NSProcessInfo systemUptime](v3, "systemUptime");
  v5 = v4;
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  v7 = objc_retainAutoreleasedReturnValue(-[AFUISiriViewController view](v6, "view"));
  v8 = (char *)objc_msgSend(v7, "siriSessionState");
  objc_release(v7);
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  -[AFUISiriViewController contentHeight](v9, "contentHeight");
  v11 = v10;
  objc_release(v9);
  if ( (unsigned __int64)(v8 - 1) > 1 )
    return 0;
  -[SiriNCAlertViewController _siriMinimumHeight](self, "_siriMinimumHeight");
  if ( v11 <= v12 )
    return 0;
  v13 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  -[AFUISiriViewController handleClickFromSource:systemUpTime:](
    v13,
    "handleClickFromSource:systemUpTime:",
    2LL,
    (unsigned __int64)v5);
  objc_release(v13);
  return 1;
}