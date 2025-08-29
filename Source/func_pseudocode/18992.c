-[SiriNCAlertViewController didFinishDraggingWindow]
void __cdecl -[SiriNCAlertViewController didFinishDraggingWindow](SiriNCAlertViewController *self, SEL a2)
{
  AFUISiriViewController *v3; // x20
  AFUISiriViewController *v4; // x20
  SiriNCService *v5; // x20
  SiriNCClientProtocol *v6; // x21

  v3 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  -[AFUISiriViewController didFinishDraggingWindow](v3, "didFinishDraggingWindow");
  objc_release(v3);
  if ( !self->_hasCompletedNCBreakoutGesture )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
    -[AFUISiriViewController didCompleteBreakOutOfNotificationCenterGesture](
      v4,
      "didCompleteBreakOutOfNotificationCenterGesture");
    objc_release(v4);
    v5 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController service](self, "service"));
    v6 = objc_retainAutoreleasedReturnValue(-[SiriNCService ncClientObjectProxy](v5, "ncClientObjectProxy"));
    -[SiriNCClientProtocol hostAppActivate](v6, "hostAppActivate");
    objc_release(v6);
    objc_release(v5);
    self->_hasCompletedNCBreakoutGesture = 1;
  }
}