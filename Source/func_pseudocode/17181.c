-[AMRemoteActionServiceViewController _loadActionViewIntoView:]
void __cdecl -[AMRemoteActionServiceViewController _loadActionViewIntoView:](
        AMRemoteActionServiceViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  AMAction *v5; // x21
  void *v6; // x20
  AMAction *v7; // x23
  NSString *v8; // x24
  NSArray *v9; // x21
  double v10; // d2
  double v11; // d8
  double v12; // d3
  double v13; // d9
  NSView *v14; // x22
  unsigned __int8 v15; // w23
  void *v16; // x28
  void *v17; // x23
  void *v18; // x24
  void *v19; // x25
  void *v20; // x26
  void *v21; // x27
  NSArray *v22; // x22
  id v23; // [xsp+0h] [xbp-C0h]
  id v24; // [xsp+8h] [xbp-B8h]
  id v25; // [xsp+10h] [xbp-B0h]
  id v26; // [xsp+18h] [xbp-A8h]
  id v27; // [xsp+20h] [xbp-A0h]
  id v28; // [xsp+28h] [xbp-98h]
  id v29; // [xsp+30h] [xbp-90h] BYREF
  _QWORD v30[4]; // [xsp+38h] [xbp-88h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _amAction](self, "_amAction"));
  v6 = objc_retainAutoreleasedReturnValue(-[AMAction view](v5, "view"));
  objc_release(v5);
  -[AMRemoteActionServiceViewController set_amActionView:](self, "set_amActionView:", v6);
  v7 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _amAction](self, "_amAction"));
  v8 = objc_retainAutoreleasedReturnValue(-[AMAction name](v7, "name"));
  v29 = 0LL;
  objc_msgSend(v6, "amActionView_prepareWithActionName:remoteActionViewInfo:constraints:", v8, 0LL, &v29);
  v9 = (NSArray *)objc_retain(v29);
  objc_release(v8);
  objc_release(v7);
  if ( -[NSArray count](v9, "count") )
    +[NSLayoutConstraint activateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "activateConstraints:", v9);
  objc_msgSend(v6, "frame");
  v11 = v10;
  v13 = v12;
  objc_msgSend(v4, "setFrame:", 0.0, 0.0);
  objc_msgSend(v6, "setFrame:", 0.0, 0.0, v11, v13);
  objc_msgSend(v4, "addSubview:", v6);
  v14 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController _amActionView](self, "_amActionView"));
  v15 = -[NSView translatesAutoresizingMaskIntoConstraints](v14, "translatesAutoresizingMaskIntoConstraints");
  objc_release(v14);
  if ( (v15 & 1) == 0 )
  {
    v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "leadingAnchor"));
    v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "leadingAnchor"));
    v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "constraintEqualToAnchor:", v27));
    v30[0] = v26;
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "trailingAnchor"));
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "trailingAnchor"));
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "constraintEqualToAnchor:", v24));
    v30[1] = v23;
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "widthAnchor"));
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "widthAnchor"));
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "constraintEqualToAnchor:", v17));
    v30[2] = v18;
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "heightAnchor"));
    v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "heightAnchor"));
    v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "constraintEqualToAnchor:", v20));
    v30[3] = v21;
    v22 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v30, 4LL));
    objc_release(v9);
    objc_release(v21);
    objc_release(v20);
    objc_release(v19);
    objc_release(v18);
    objc_release(v17);
    objc_release(v16);
    objc_release(v23);
    objc_release(v24);
    objc_release(v25);
    objc_release(v26);
    objc_release(v27);
    objc_release(v28);
    +[NSLayoutConstraint activateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "activateConstraints:", v22);
    v9 = v22;
  }
  objc_msgSend(v4, "layoutSubtreeIfNeeded");
  objc_release(v9);
  objc_release(v6);
  objc_release(v4);
}