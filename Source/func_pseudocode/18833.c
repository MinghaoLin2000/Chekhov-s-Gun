-[RemoteViewController _setupRemoteViewControllerContent]
void __cdecl -[RemoteViewController _setupRemoteViewControllerContent](RemoteViewController *self, SEL a2)
{
  RemoteViewBridgeViewController *v3; // x19
  RemoteViewBridgeViewController *v4; // x19
  NSString *v5; // x0
  NSString *remoteViewIdentifier; // x8
  RemoteViewBridgeViewController *v7; // x20
  void *v8; // x19
  RemoteViewBridgeHostContainer *v9; // x20
  RemoteViewBridgeHostContainer *v10; // x28
  void *v11; // x21
  void *v12; // x22
  void *v13; // x24
  RemoteViewBridgeHostContainer *v14; // x23
  void *v15; // x25
  void *v16; // x26
  void *v17; // x27
  NSArray *v18; // x20
  id v19; // [xsp+0h] [xbp-C0h]
  id v20; // [xsp+10h] [xbp-B0h]
  id v21; // [xsp+18h] [xbp-A8h]
  RemoteViewBridgeHostContainer *v22; // [xsp+20h] [xbp-A0h]
  id v23; // [xsp+28h] [xbp-98h]
  id v24; // [xsp+30h] [xbp-90h]
  id v25; // [xsp+38h] [xbp-88h]
  RemoteViewBridgeHostContainer *v26; // [xsp+40h] [xbp-80h]
  _QWORD v27[4]; // [xsp+48h] [xbp-78h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[RemoteViewController remoteViewController](self, "remoteViewController"));
  -[RemoteViewBridgeViewController setDelegate:](v3, "setDelegate:", self);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[RemoteViewController remoteViewController](self, "remoteViewController"));
  v5 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeViewController remoteViewIdentifier](v4, "remoteViewIdentifier"));
  remoteViewIdentifier = self->_remoteViewIdentifier;
  self->_remoteViewIdentifier = v5;
  objc_release(remoteViewIdentifier);
  objc_release(v4);
  v7 = objc_retainAutoreleasedReturnValue(-[RemoteViewController remoteViewController](self, "remoteViewController"));
  v8 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeViewController view](v7, "view"));
  objc_release(v7);
  objc_msgSend(v8, "setSynchronizesImplicitAnimations:", 0LL);
  objc_msgSend(v8, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
  v9 = objc_retainAutoreleasedReturnValue(-[RemoteViewController contentView](self, "contentView"));
  -[RemoteViewBridgeHostContainer addSubview:](v9, "addSubview:", v8);
  objc_release(v9);
  v26 = objc_retainAutoreleasedReturnValue(-[RemoteViewController contentView](self, "contentView"));
  v25 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeHostContainer topAnchor](v26, "topAnchor"));
  v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "topAnchor"));
  v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "constraintEqualToAnchor:", v24));
  v27[0] = v23;
  v22 = objc_retainAutoreleasedReturnValue(-[RemoteViewController contentView](self, "contentView"));
  v21 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeHostContainer bottomAnchor](v22, "bottomAnchor"));
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "bottomAnchor"));
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "constraintEqualToAnchor:", v20));
  v27[1] = v19;
  v10 = objc_retainAutoreleasedReturnValue(-[RemoteViewController contentView](self, "contentView"));
  v11 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeHostContainer leadingAnchor](v10, "leadingAnchor"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "leadingAnchor"));
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "constraintEqualToAnchor:", v12));
  v27[2] = v13;
  v14 = objc_retainAutoreleasedReturnValue(-[RemoteViewController contentView](self, "contentView"));
  v15 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeHostContainer widthAnchor](v14, "widthAnchor"));
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "widthAnchor"));
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "constraintEqualToAnchor:", v16));
  v27[3] = v17;
  v18 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v27, 4LL));
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
  objc_release(v19);
  objc_release(v20);
  objc_release(v21);
  objc_release(v22);
  objc_release(v23);
  objc_release(v24);
  objc_release(v25);
  objc_release(v26);
  objc_release(v8);
}