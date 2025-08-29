-[AMLoaderServiceAction remoteActionInvalidate]
void __cdecl -[AMLoaderServiceAction remoteActionInvalidate](AMLoaderServiceAction *self, SEL a2)
{
  AMParametersObserver *v3; // x20
  AMParametersObserver *v4; // x20
  AMParametersObserver *v5; // x20
  AMLoaderServiceVariableController *v6; // x20
  AMAction *v7; // x20
  AMLoaderServiceVariableController *v8; // x20
  _QWORD block[5]; // [xsp+8h] [xbp-38h] BYREF

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
    sub_100011E54(self);
  -[AMLoaderServiceAction _tearDownExecutionWithError:](self, "_tearDownExecutionWithError:", 0LL);
  v3 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _parametersObserver](self, "_parametersObserver"));
  objc_release(v3);
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _parametersObserver](self, "_parametersObserver"));
    -[AMParametersObserver invalidate](v4, "invalidate");
    objc_release(v4);
    v5 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _parametersObserver](self, "_parametersObserver"));
    -[AMParametersObserver setDelegate:](v5, "setDelegate:", 0LL);
    objc_release(v5);
    -[AMLoaderServiceAction set_parametersObserver:](self, "set_parametersObserver:", 0LL);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _variableController](self, "_variableController"));
  objc_release(v6);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _amAction](self, "_amAction"));
    -[AMAction setVariableController:](v7, "setVariableController:", 0LL);
    objc_release(v7);
    v8 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _variableController](self, "_variableController"));
    -[AMLoaderServiceVariableController invalidate](v8, "invalidate");
    objc_release(v8);
    -[AMLoaderServiceAction set_variableController:](self, "set_variableController:", 0LL);
  }
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10000AE5C;
  block[3] = &unk_10001C338;
  block[4] = self;
  dispatch_async(&_dispatch_main_q, block);
}