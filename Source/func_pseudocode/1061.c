-[AMPCapacityBarViewController viewDidLoad]
void __cdecl -[AMPCapacityBarViewController viewDidLoad](AMPCapacityBarViewController *self, SEL a2)
{
  AMPCapacityBarView *v3; // x20
  unsigned __int64 capacity; // x20
  AMPCapacityBarView *v5; // x21
  unsigned __int64 v6; // x20
  AMPCapacityBarView *v7; // x21
  unsigned __int64 bytesUsed; // x20
  AMPCapacityBarView *v9; // x21
  unsigned __int64 v10; // x20
  AMPCapacityBarView *v11; // x19
  objc_super v12; // [xsp+0h] [xbp-40h] BYREF

  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___AMPCapacityBarViewController;
  -[AMPCapacityBarViewController viewDidLoad](&v12, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarViewController overlayBar](self, "overlayBar"));
  -[AMPCapacityBarView setHidden:](v3, "setHidden:", 1LL);
  objc_release(v3);
  capacity = self->_capacity;
  v5 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarViewController capacityBar](self, "capacityBar"));
  -[AMPCapacityBarView setCapacity:](v5, "setCapacity:", capacity);
  objc_release(v5);
  v6 = self->_capacity;
  v7 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarViewController overlayBar](self, "overlayBar"));
  -[AMPCapacityBarView setCapacity:](v7, "setCapacity:", v6);
  objc_release(v7);
  bytesUsed = self->_bytesUsed;
  v9 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarViewController capacityBar](self, "capacityBar"));
  -[AMPCapacityBarView setBytesUsed:](v9, "setBytesUsed:", bytesUsed);
  objc_release(v9);
  v10 = self->_bytesUsed;
  v11 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarViewController overlayBar](self, "overlayBar"));
  -[AMPCapacityBarView setBytesUsed:](v11, "setBytesUsed:", v10);
  objc_release(v11);
}