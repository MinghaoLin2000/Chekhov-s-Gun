-[DeviceFinderTabContainerViewController viewDidLoad]
void __cdecl -[DeviceFinderTabContainerViewController viewDidLoad](
        DeviceFinderTabContainerViewController *self,
        SEL a2)
{
  NSDistributedNotificationCenter *v3; // x20
  NSBundle *v4; // x20
  NSString *v5; // x21
  NSPopUpButton *v6; // x22
  objc_super v7; // [xsp+0h] [xbp-30h] BYREF

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___DeviceFinderTabContainerViewController;
  -[DeviceFinderTabContainerViewController viewDidLoad](&v7, "viewDidLoad");
  -[DeviceFinderTabContainerViewController setupTabBarView](self, "setupTabBarView");
  -[DeviceFinderTabContainerViewController setupTabView](self, "setupTabView");
  -[DeviceFinderTabContainerViewController updateBarChoices:](self, "updateBarChoices:", 1LL);
  if ( -[DeviceViewController isRawDeviceMode](self, "isRawDeviceMode") )
    -[DeviceFinderTabContainerViewController configureForRawDeviceMode](self, "configureForRawDeviceMode");
  v3 = objc_retainAutoreleasedReturnValue(
         +[NSDistributedNotificationCenter defaultCenter](
           &OBJC_CLASS___NSDistributedNotificationCenter,
           "defaultCenter"));
  -[NSDistributedNotificationCenter addObserver:selector:name:object:](
    v3,
    "addObserver:selector:name:object:",
    self,
    "libraryChangedNotification:",
    kITLibraryDidChangeNotification,
    0LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v5 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v4,
           "localizedStringForKey:value:table:",
           CFSTR("More"),
           &stru_1000BA220,
           0LL));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController overflowPulldown](self, "overflowPulldown"));
  -[NSPopUpButton setAccessibilityLabel:](v6, "setAccessibilityLabel:", v5);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  -[DeviceFinderTabContainerViewController setupOverflowImageStyling](self, "setupOverflowImageStyling");
}