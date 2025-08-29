-[DeviceViewController presentSheetWithViewController:okButtonLabel:cancelButtonLabel:hideCancelButton:completionHandler:]
void __cdecl -[DeviceViewController presentSheetWithViewController:okButtonLabel:cancelButtonLabel:hideCancelButton:completionHandler:](
        DeviceViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        bool a6,
        id a7)
{
  _BOOL4 v8; // w23
  id v12; // x19
  id v13; // x20
  id v14; // x27
  SheetViewController *v15; // x21
  NSBundle *v16; // x25
  SheetViewController *v17; // x22
  NSButton *v18; // x21
  NSButton *v19; // x21
  NSButton *v20; // x21
  NSView *v21; // x23
  void *v22; // x25
  NSLayoutConstraint *v23; // x26
  NSLayoutConstraint *v24; // x28
  SheetViewController *v25; // x27
  NSWindow *v26; // x22
  void *v27; // x24
  void *v28; // x21
  id v29; // [xsp+8h] [xbp-88h]
  id v30; // [xsp+10h] [xbp-80h]
  _QWORD v31[4]; // [xsp+18h] [xbp-78h] BYREF
  id v32; // [xsp+38h] [xbp-58h]

  v8 = a6;
  v12 = objc_retain(a4);
  v13 = objc_retain(a5);
  v30 = objc_retain(a7);
  v14 = objc_retain(a3);
  v15 = objc_alloc(&OBJC_CLASS___SheetViewController);
  v16 = objc_retainAutoreleasedReturnValue(+[NSBundle bundleForClass:](&OBJC_CLASS___NSBundle, "bundleForClass:", objc_opt_class(self)));
  v17 = -[SheetViewController initWithNibName:bundle:](
          v15,
          "initWithNibName:bundle:",
          CFSTR("SheetViewController"),
          v16);
  objc_release(v16);
  v29 = objc_retainAutoreleasedReturnValue(-[SheetViewController view](v17, "view"));
  if ( v12 )
  {
    v18 = objc_retainAutoreleasedReturnValue(-[SheetViewController okButton](v17, "okButton"));
    -[NSButton setTitle:](v18, "setTitle:", v12);
    objc_release(v18);
  }
  if ( v13 )
  {
    v19 = objc_retainAutoreleasedReturnValue(-[SheetViewController cancelButton](v17, "cancelButton"));
    -[NSButton setTitle:](v19, "setTitle:", v13);
    objc_release(v19);
  }
  if ( v8 )
  {
    v20 = objc_retainAutoreleasedReturnValue(-[SheetViewController cancelButton](v17, "cancelButton"));
    -[NSButton setHidden:](v20, "setHidden:", 1LL);
    objc_release(v20);
  }
  v21 = objc_retainAutoreleasedReturnValue(-[SheetViewController containerView](v17, "containerView"));
  v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "view"));
  objc_msgSend(v22, "layoutSubtreeIfNeeded");
  -[NSView addSubview:](v21, "addSubview:", v22);
  v23 = objc_retainAutoreleasedReturnValue(
          +[NSLayoutConstraint constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:](
            &OBJC_CLASS___NSLayoutConstraint,
            "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
            v22,
            7LL,
            0LL,
            v21,
            7LL,
            1.0,
            0.0));
  -[NSView addConstraint:](v21, "addConstraint:", v23);
  v24 = objc_retainAutoreleasedReturnValue(
          +[NSLayoutConstraint constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:](
            &OBJC_CLASS___NSLayoutConstraint,
            "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
            v22,
            8LL,
            0LL,
            v21,
            8LL,
            1.0,
            0.0));
  -[NSView addConstraint:](v21, "addConstraint:", v24);
  -[SheetViewController setSubviewController:](v17, "setSubviewController:", v14);
  objc_release(v14);
  v25 = objc_retain(v17);
  v26 = objc_retainAutoreleasedReturnValue(+[NSWindow windowWithContentViewController:](&OBJC_CLASS___NSWindow, "windowWithContentViewController:", v25));
  v27 = objc_retainAutoreleasedReturnValue(-[DeviceViewController view](self, "view"));
  v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "window"));
  v31[0] = _NSConcreteStackBlock;
  v31[1] = 3254779904LL;
  v31[2] = sub_100028B98;
  v31[3] = &unk_1000B8AE8;
  v32 = objc_retain(v30);
  objc_msgSend(v28, "beginSheet:completionHandler:", v26, v31);
  objc_release(v28);
  objc_release(v27);
  objc_release(v32);
  objc_release(v26);
  objc_release(v24);
  objc_release(v23);
  objc_release(v22);
  objc_release(v21);
  objc_release(v29);
  objc_release(v25);
  objc_release(v30);
  objc_release(v13);
  objc_release(v12);
  objc_release(v25);
}