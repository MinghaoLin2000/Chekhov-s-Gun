-[DeviceSummaryViewController loadMoreIdentifiersViewController]
void __cdecl -[DeviceSummaryViewController loadMoreIdentifiersViewController](
        DeviceSummaryViewController *self,
        SEL a2)
{
  void *v3; // x20
  DeviceSummaryAreaViewController *v4; // x20
  DeviceSummaryAreaViewController *v5; // x20
  void *v6; // x21
  NSView *v7; // x22
  NSMutableArray *v8; // x20
  DeviceSummaryAreaViewController *v9; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = (void *)objc_opt_new(&OBJC_CLASS___DeviceMoreIdentifiersViewController, a2);
  -[DeviceSummaryViewController setMoreIdentifiersViewController:](self, "setMoreIdentifiersViewController:", v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController moreIdentifiersViewController](self, "moreIdentifiersViewController"));
  -[DeviceViewController loadPropertiesForViewController:](self, "loadPropertiesForViewController:", v4);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController moreIdentifiersViewController](self, "moreIdentifiersViewController"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryAreaViewController view](v5, "view"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController moreIdentifiersContainerView](self, "moreIdentifiersContainerView"));
  sub_10002ABA4((int)v6, v7);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController viewControllers](self, "viewControllers"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController moreIdentifiersViewController](self, "moreIdentifiersViewController"));
  -[NSMutableArray addObject:](v8, "addObject:", v9);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}