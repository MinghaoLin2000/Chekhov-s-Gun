-[DeviceFinderTabContainerViewController setupOverflowImageStyling]
void __cdecl -[DeviceFinderTabContainerViewController setupOverflowImageStyling](
        DeviceFinderTabContainerViewController *self,
        SEL a2)
{
  void *v3; // x22
  NSImageSymbolConfiguration *v4; // x20
  void *v5; // x21
  NSPopUpButton *v6; // x22
  NSPopUpButton *v7; // x22
  NSPopUpButton *v8; // x22
  NSColor *v9; // x22
  NSPopUpButton *v10; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         +[NSImage _imageWithSystemSymbolName:](
           &OBJC_CLASS___NSImage,
           "_imageWithSystemSymbolName:",
           CFSTR("chevron.forward.2")));
  if ( !v3 )
    v3 = objc_retainAutoreleasedReturnValue(
           +[NSImage _imageWithSystemSymbolName:](
             &OBJC_CLASS___NSImage,
             "_imageWithSystemSymbolName:",
             CFSTR("chevron.right.2")));
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSImageSymbolConfiguration configurationWithPointSize:weight:scale:](
           &OBJC_CLASS___NSImageSymbolConfiguration,
           "configurationWithPointSize:weight:scale:",
           1LL,
           13.0,
           NSFontWeightMedium));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "imageWithSymbolConfiguration:", v4));
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController overflowPulldown](self, "overflowPulldown"));
  -[NSPopUpButton setImage:](v6, "setImage:", v5);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController overflowPulldown](self, "overflowPulldown"));
  -[NSPopUpButton setImageScaling:](v7, "setImageScaling:", 2LL);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController overflowPulldown](self, "overflowPulldown"));
  -[NSPopUpButton _setSemanticContext:](v8, "_setSemanticContext:", 4LL);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(+[NSColor secondaryLabelColor](&OBJC_CLASS___NSColor, "secondaryLabelColor"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController overflowPulldown](self, "overflowPulldown"));
  -[NSPopUpButton setContentTintColor:](v10, "setContentTintColor:", v9);
  objc_release(v10);
  objc_release(v9);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}