-[DeviceModeFinderViewController loadProgressViewController:progress:]
void __cdecl -[DeviceModeFinderViewController loadProgressViewController:progress:](
        DeviceModeFinderViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x20
  id v7; // x21
  ProgressViewController *v8; // x22
  void *v9; // x23
  ProgressViewController *v10; // x22
  NSTextField *v11; // x23
  ProgressViewController *v12; // x21
  NSView *v13; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController progressViewController](self, "progressViewController"));
  v9 = objc_retainAutoreleasedReturnValue(-[ProgressViewController view](v8, "view"));
  -[DeviceModeFinderViewController setContentView:](self, "setContentView:", v9);
  objc_release(v9);
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController progressViewController](self, "progressViewController"));
  v11 = objc_retainAutoreleasedReturnValue(-[ProgressViewController label](v10, "label"));
  -[NSTextField setStringValue:](v11, "setStringValue:", v7);
  objc_release(v7);
  objc_release(v11);
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController progressViewController](self, "progressViewController"));
  -[ProgressViewController setProgress:](v12, "setProgress:", v6);
  objc_release(v6);
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewContainer](self, "footerViewContainer"));
  -[NSView setHidden:](v13, "setHidden:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v13);
}