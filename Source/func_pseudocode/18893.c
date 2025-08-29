-[SiriNCService _handleUserCancel]
bool __cdecl -[SiriNCService _handleUserCancel](SiriNCService *self, SEL a2)
{
  SiriNCAlertViewController *v4; // x20
  unsigned __int8 v5; // w21
  QLPreviewPanel *v6; // x20
  NCCustomAlert *v7; // x20
  NSProcessInfo *v8; // x21
  double v9; // d0

  if ( ((unsigned int)+[SiriUISnippetViewController isDragInProgress](
                        &OBJC_CLASS___SiriUISnippetViewController,
                        "isDragInProgress") & 1) != 0 )
    return 0;
  v4 = objc_retainAutoreleasedReturnValue(-[SiriNCService alertViewController](self, "alertViewController"));
  v5 = -[SiriNCAlertViewController handleUserCancel](v4, "handleUserCancel");
  objc_release(v4);
  if ( (v5 & 1) == 0 )
  {
    if ( +[QLPreviewPanel sharedPreviewPanelExists](&OBJC_CLASS___QLPreviewPanel, "sharedPreviewPanelExists") )
    {
      v6 = objc_retainAutoreleasedReturnValue(+[QLPreviewPanel sharedPreviewPanel](&OBJC_CLASS___QLPreviewPanel, "sharedPreviewPanel"));
      if ( ((unsigned int)-[QLPreviewPanel isVisible](v6, "isVisible") & 1) != 0 )
      {
        -[QLPreviewPanel close](v6, "close");
LABEL_10:
        objc_release(v6);
        return 1;
      }
      objc_release(v6);
    }
    v7 = objc_retainAutoreleasedReturnValue(-[SiriNCService alert](self, "alert"));
    objc_release(v7);
    if ( !v7 )
      return 0;
    v6 = objc_retainAutoreleasedReturnValue(
           +[SiriUIDismissalOptions optionsWithDismissalReason:](
             &OBJC_CLASS___SiriUIDismissalOptions,
             "optionsWithDismissalReason:",
             7LL));
    v8 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
    -[NSProcessInfo systemUptime](v8, "systemUptime");
    -[SiriNCService invokeService:fromEventSource:eventTime:requestInfo:speechRequestOptions:launchOptions:dismissalOptions:](
      self,
      "invokeService:fromEventSource:eventTime:requestInfo:speechRequestOptions:launchOptions:dismissalOptions:",
      4LL,
      0LL,
      (unsigned __int64)v9,
      0LL,
      0LL,
      0LL,
      v6);
    objc_release(v8);
    goto LABEL_10;
  }
  return 1;
}