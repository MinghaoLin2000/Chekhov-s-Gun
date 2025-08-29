-[DeviceUIServiceViewController viewDidLoad]
void __cdecl -[DeviceUIServiceViewController viewDidLoad](DeviceUIServiceViewController *self, SEL a2)
{
  void *v3; // x19
  void *v4; // x0
  void *v5; // x20
  void *v6; // x22
  void *v7; // x23
  void *v8; // x24
  void *v9; // x22
  void *v10; // x23
  void *v11; // x24
  void *v12; // x22
  double v13; // d2
  void *v14; // x23
  id WeakRetained; // x22
  void *v16; // x22
  double v17; // d3
  void *v18; // x23
  NSLayoutConstraint **p_heightAnchor; // x21
  id v20; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController view](self, "view"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "superview"));
  v5 = v4;
  if ( v4 )
  {
    if ( (unsigned int)objc_msgSend(v4, "autoresizesSubviews") )
      objc_msgSend(v5, "setAutoresizesSubviews:", 0LL);
    objc_msgSend(v3, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
    objc_msgSend(v5, "addSubview:", v3);
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "leadingAnchor"));
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "leadingAnchor"));
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "constraintEqualToAnchor:constant:", v7, 0.0));
    objc_msgSend(v8, "setActive:", 1LL);
    objc_release(v8);
    objc_release(v7);
    objc_release(v6);
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "topAnchor"));
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "topAnchor"));
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "constraintEqualToAnchor:constant:", v10, 0.0));
    objc_msgSend(v11, "setActive:", 1LL);
    objc_release(v11);
    objc_release(v10);
    objc_release(v9);
  }
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "widthAnchor"));
  objc_msgSend(v3, "frame");
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "constraintEqualToConstant:", v13));
  objc_storeWeak((id *)&self->_widthAnchor, v14);
  objc_release(v14);
  objc_release(v12);
  WeakRetained = objc_loadWeakRetained((id *)&self->_widthAnchor);
  objc_msgSend(WeakRetained, "setActive:", 1LL);
  objc_release(WeakRetained);
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "heightAnchor"));
  objc_msgSend(v3, "frame");
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "constraintEqualToConstant:", v17));
  p_heightAnchor = &self->_heightAnchor;
  objc_storeWeak((id *)p_heightAnchor, v18);
  objc_release(v18);
  objc_release(v16);
  v20 = objc_loadWeakRetained((id *)p_heightAnchor);
  objc_msgSend(v20, "setActive:", 1LL);
  objc_release(v20);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}