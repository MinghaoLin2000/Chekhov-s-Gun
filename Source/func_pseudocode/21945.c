-[PAUbiquityController dealloc]
void __cdecl -[PAUbiquityController dealloc](PAUbiquityController *self, SEL a2)
{
  NSArray *v3; // x20
  unsigned int v4; // w21
  objc_super v5; // [xsp+0h] [xbp-30h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(+[NSFileCoordinator filePresenters](&OBJC_CLASS___NSFileCoordinator, "filePresenters"));
  v4 = -[NSArray containsObject:](v3, "containsObject:", self);
  objc_release(v3);
  if ( v4 )
    +[NSFileCoordinator removeFilePresenter:](&OBJC_CLASS___NSFileCoordinator, "removeFilePresenter:", self);
  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___PAUbiquityController;
  -[PAUbiquityController dealloc](&v5, "dealloc");
}