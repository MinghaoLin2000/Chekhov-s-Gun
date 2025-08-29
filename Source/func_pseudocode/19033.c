-[SiriNCAlertViewController siriViewContollerDidChangeContentHeight:]
void __cdecl -[SiriNCAlertViewController siriViewContollerDidChangeContentHeight:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3)
{
  AFUISiriViewController *v4; // x20
  double v5; // d0
  double v6; // d9
  double v7; // d0
  double v8; // d8
  double v9; // d0
  double v10; // d0
  double v11; // d0
  AFUISiriViewController *v12; // x19
  dispatch_time_t v13; // x19
  _QWORD block[4]; // [xsp+8h] [xbp-68h] BYREF
  id v15; // [xsp+28h] [xbp-48h] BYREF
  bool v16; // [xsp+30h] [xbp-40h]
  id location; // [xsp+38h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController", a3));
  -[AFUISiriViewController contentHeight](v4, "contentHeight");
  v6 = v5;
  objc_release(v4);
  -[SiriNCAlertViewController _siriMaximumHeight](self, "_siriMaximumHeight");
  v8 = v7;
  if ( v6 >= v7 )
    v6 = v7;
  -[SiriNCAlertViewController _siriMinimumHeight](self, "_siriMinimumHeight");
  if ( v6 < v9 )
    v6 = v9;
  if ( (_os_feature_enabled_impl("SiriUI", "compact_siri") & 1) == 0 )
  {
    -[NSLayoutConstraint constant](self->_siriViewHeightConstraint, "constant");
    if ( v6 < v10 )
      v6 = v10;
  }
  -[NSLayoutConstraint constant](self->_siriViewHeightConstraint, "constant");
  if ( v6 == v11 )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
    -[AFUISiriViewController didChangeWindowHeight:](v12, "didChangeWindowHeight:", v6 == v8);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v12);
  }
  else
  {
    -[NSLayoutConstraint setConstant:](self->_siriViewHeightConstraint, "setConstant:", v6);
    objc_initWeak(&location, self);
    v13 = dispatch_time(0LL, 350000000LL);
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100010FBC;
    block[3] = &unk_100020CC0;
    objc_copyWeak(&v15, &location);
    v16 = v6 == v8;
    dispatch_after(v13, &_dispatch_main_q, block);
    objc_destroyWeak(&v15);
    objc_destroyWeak(&location);
  }
}