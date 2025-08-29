-[RemoteViewController loadView]
void __cdecl -[RemoteViewController loadView](RemoteViewController *self, SEL a2)
{
  id v3; // x20
  RemoteViewBridgeHostContainer *v4; // x21
  RemoteViewBridgeHostContainer *v5; // x21
  RemoteViewBridgeHostContainer *v6; // x21
  RemoteViewBridgeHostContainer *v7; // x21
  RemoteViewBridgeHostContainer *v8; // x21
  RemoteViewBridgeHostContainer *v9; // x21
  void *v10; // x28
  RemoteViewBridgeHostContainer *v11; // x22
  void *v12; // x23
  void *v13; // x24
  void *v14; // x25
  RemoteViewBridgeHostContainer *v15; // x26
  void *v16; // x27
  void *v17; // x21
  NSArray *v18; // x20
  NSLayoutConstraint *v19; // x0
  NSLayoutConstraint *heightConstraint; // x8
  NSLayoutConstraint *v21; // x20
  double v22; // d0
  NSLayoutConstraint *v23; // x20
  NSLayoutConstraint *v24; // x20
  double v25; // d0
  NSLayoutConstraint *v26; // x21
  NSLayoutConstraint *v27; // x22
  NSArray *v28; // x23
  id v29; // [xsp+0h] [xbp-F0h]
  id v30; // [xsp+10h] [xbp-E0h]
  id v31; // [xsp+18h] [xbp-D8h]
  RemoteViewBridgeHostContainer *v32; // [xsp+20h] [xbp-D0h]
  id v33; // [xsp+28h] [xbp-C8h]
  id v34; // [xsp+30h] [xbp-C0h]
  id v35; // [xsp+38h] [xbp-B8h]
  RemoteViewBridgeHostContainer *v36; // [xsp+40h] [xbp-B0h]
  void *v37; // [xsp+48h] [xbp-A8h]
  _QWORD v38[2]; // [xsp+50h] [xbp-A0h] BYREF
  _QWORD v39[4]; // [xsp+60h] [xbp-90h] BYREF

  v3 = objc_alloc_init((Class)&OBJC_CLASS___NSView);
  objc_msgSend(v3, "setIdentifier:", CFSTR("RemoteView.container"));
  objc_msgSend(v3, "setWantsLayer:", 1LL);
  objc_msgSend(v3, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
  v4 = objc_opt_new(&OBJC_CLASS___RemoteViewBridgeHostContainer);
  -[RemoteViewController setContentView:](self, "setContentView:", v4);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[RemoteViewController contentView](self, "contentView"));
  -[RemoteViewBridgeHostContainer setIdentifier:](v5, "setIdentifier:", CFSTR("contentView"));
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[RemoteViewController contentView](self, "contentView"));
  -[RemoteViewBridgeHostContainer setWantsLayer:](v6, "setWantsLayer:", 1LL);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[RemoteViewController contentView](self, "contentView"));
  -[RemoteViewBridgeHostContainer setTranslatesAutoresizingMaskIntoConstraints:](
    v7,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0LL);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[RemoteViewController contentView](self, "contentView"));
  -[RemoteViewBridgeHostContainer setDelegate:](v8, "setDelegate:", self);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[RemoteViewController contentView](self, "contentView"));
  objc_msgSend(v3, "addSubview:", v9);
  objc_release(v9);
  v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "topAnchor"));
  v36 = objc_retainAutoreleasedReturnValue(-[RemoteViewController contentView](self, "contentView"));
  v34 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeHostContainer topAnchor](v36, "topAnchor"));
  v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v35, "constraintEqualToAnchor:", v34));
  v39[0] = v33;
  v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "bottomAnchor"));
  v32 = objc_retainAutoreleasedReturnValue(-[RemoteViewController contentView](self, "contentView"));
  v30 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeHostContainer bottomAnchor](v32, "bottomAnchor"));
  v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "constraintEqualToAnchor:", v30));
  v39[1] = v29;
  v37 = v3;
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "leadingAnchor"));
  v11 = objc_retainAutoreleasedReturnValue(-[RemoteViewController contentView](self, "contentView"));
  v12 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeHostContainer leadingAnchor](v11, "leadingAnchor"));
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "constraintEqualToAnchor:", v12));
  v39[2] = v13;
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "widthAnchor"));
  v15 = objc_retainAutoreleasedReturnValue(-[RemoteViewController contentView](self, "contentView"));
  v16 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeHostContainer widthAnchor](v15, "widthAnchor"));
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "constraintEqualToAnchor:", v16));
  v39[3] = v17;
  v18 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v39, 4LL));
  +[NSLayoutConstraint activateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "activateConstraints:", v18);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  objc_release(v29);
  objc_release(v30);
  objc_release(v32);
  objc_release(v31);
  objc_release(v33);
  objc_release(v34);
  objc_release(v36);
  objc_release(v35);
  v19 = objc_retainAutoreleasedReturnValue(
          +[NSLayoutConstraint constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:](
            &OBJC_CLASS___NSLayoutConstraint,
            "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
            self->_contentView,
            8LL,
            0LL,
            0LL,
            0LL,
            1.0,
            320.0));
  heightConstraint = self->_heightConstraint;
  self->_heightConstraint = v19;
  objc_release(heightConstraint);
  v21 = objc_retainAutoreleasedReturnValue(-[RemoteViewController heightConstraint](self, "heightConstraint"));
  LODWORD(v22) = 1140097024;
  -[NSLayoutConstraint setPriority:](v21, "setPriority:", v22);
  objc_release(v21);
  v23 = objc_retainAutoreleasedReturnValue(
          +[NSLayoutConstraint constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:](
            &OBJC_CLASS___NSLayoutConstraint,
            "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
            self->_contentView,
            7LL,
            0LL,
            0LL,
            0LL,
            1.0,
            345.0));
  -[RemoteViewController setWidthConstraint:](self, "setWidthConstraint:", v23);
  objc_release(v23);
  v24 = objc_retainAutoreleasedReturnValue(-[RemoteViewController widthConstraint](self, "widthConstraint"));
  LODWORD(v25) = 1140097024;
  -[NSLayoutConstraint setPriority:](v24, "setPriority:", v25);
  objc_release(v24);
  v26 = objc_retainAutoreleasedReturnValue(-[RemoteViewController heightConstraint](self, "heightConstraint"));
  v38[0] = v26;
  v27 = objc_retainAutoreleasedReturnValue(-[RemoteViewController widthConstraint](self, "widthConstraint"));
  v38[1] = v27;
  v28 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v38, 2LL));
  +[NSLayoutConstraint activateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "activateConstraints:", v28);
  objc_release(v28);
  objc_release(v27);
  objc_release(v26);
  -[RemoteViewController setView:](self, "setView:", v37);
  objc_release(v37);
}