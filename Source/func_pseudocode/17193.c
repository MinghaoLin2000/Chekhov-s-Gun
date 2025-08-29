-[AMLoaderServiceAction dealloc]
void __cdecl -[AMLoaderServiceAction dealloc](AMLoaderServiceAction *self, SEL a2)
{
  AMParametersObserver *parametersObserver; // x0
  AMParametersObserver *v4; // x0
  AMLoaderServiceVariableController *variableController; // x0
  AMLoaderServiceVariableController *v6; // x0
  _QWORD *v7; // x20
  objc_super v8; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v9[5]; // [xsp+18h] [xbp-38h] BYREF

  parametersObserver = self->__parametersObserver;
  if ( parametersObserver )
  {
    -[AMParametersObserver invalidate](parametersObserver, "invalidate");
    -[AMParametersObserver setDelegate:](self->__parametersObserver, "setDelegate:", 0LL);
    v4 = self->__parametersObserver;
    self->__parametersObserver = 0LL;
    objc_release(v4);
  }
  variableController = self->__variableController;
  if ( variableController )
  {
    -[AMLoaderServiceVariableController invalidate](variableController, "invalidate");
    v6 = self->__variableController;
    self->__variableController = 0LL;
    objc_release(v6);
  }
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_10000A7B8;
  v9[3] = &unk_10001C338;
  v9[4] = self;
  v7 = objc_retainBlock(v9);
  if ( +[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
    ((void (__fastcall *)(_QWORD *))v7[2])(v7);
  else
    dispatch_sync(&_dispatch_main_q, v7);
  objc_release(v7);
  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___AMLoaderServiceAction;
  -[AMLoaderServiceAction dealloc](&v8, "dealloc");
}