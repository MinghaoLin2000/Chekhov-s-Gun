-[DeviceSummaryViewController loadOptionsViewController]
void __cdecl -[DeviceSummaryViewController loadOptionsViewController](DeviceSummaryViewController *self, SEL a2)
{
  objc_class *v3; // x0
  __int64 v4; // x1
  void *v5; // x20
  DeviceSummaryAreaViewController *v6; // x20
  DeviceSummaryAreaViewController *v7; // x20
  void *v8; // x21
  NSView *v9; // x22
  NSMutableArray *v10; // x20
  DeviceSummaryAreaViewController *v11; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = -[DeviceSummaryViewController classOptionsViewController](self, "classOptionsViewController");
  v5 = (void *)objc_opt_new(v3, v4);
  -[DeviceSummaryViewController setOptionsViewController:](self, "setOptionsViewController:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController optionsViewController](self, "optionsViewController"));
  -[DeviceViewController loadPropertiesForViewController:](self, "loadPropertiesForViewController:", v6);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController optionsViewController](self, "optionsViewController"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryAreaViewController view](v7, "view"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController optionsContainerView](self, "optionsContainerView"));
  sub_10002ABA4((int)v8, v9);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController viewControllers](self, "viewControllers"));
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController optionsViewController](self, "optionsViewController"));
  -[NSMutableArray addObject:](v10, "addObject:", v11);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v10);
}