-[SiriNCAlertViewController _siriMaximumHeight]
double __cdecl -[SiriNCAlertViewController _siriMaximumHeight](SiriNCAlertViewController *self, SEL a2)
{
  void *v3; // x21
  void *v4; // x22
  void *v5; // x19
  __int64 v6; // x0
  double v7; // d8
  double v8; // d3
  double v9; // d3

  v3 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController view](self, "view"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "window"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "screen"));
  objc_release(v4);
  objc_release(v3);
  v7 = 600.0;
  if ( v5 && (unsigned int)AFDeviceSupportsSystemAssistantExperience(v6) )
  {
    if ( (_os_feature_enabled_impl("SiriUI", "windowed_launch") & 1) != 0 || self->_hasCompletedNCBreakoutGesture )
    {
      objc_msgSend(v5, "visibleFrame");
      v7 = v8;
    }
    else
    {
      objc_msgSend(v5, "visibleFrame");
      v7 = v9 + -20.0 + -126.0;
    }
  }
  objc_release(v5);
  return v7;
}