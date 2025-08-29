-[SUContainedSoftwareUpdateController init]
SUContainedSoftwareUpdateController *__cdecl -[SUContainedSoftwareUpdateController init](
        SUContainedSoftwareUpdateController *self,
        SEL a2)
{
  SUContainedSoftwareUpdateController *v2; // x19
  dispatch_queue_t v3; // x0
  OS_dispatch_queue *queue; // x8
  dispatch_queue_t v5; // x0
  OS_dispatch_queue *contextQueue; // x8
  NSMapTable *v7; // x0
  NSMapTable *contextsForController; // x8
  NSMutableArray *v9; // x0
  NSMutableArray *enqueuedSoftwareUpdateControllers; // x8
  objc_super v12; // [xsp+0h] [xbp-20h] BYREF

  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___SUContainedSoftwareUpdateController;
  v2 = -[SUContainedSoftwareUpdateController init](&v12, "init");
  if ( v2 )
  {
    v3 = dispatch_queue_create("com.apple.khsoftwareupdatecontroller", 0LL);
    queue = v2->_queue;
    v2->_queue = (OS_dispatch_queue *)v3;
    objc_release(queue);
    v5 = dispatch_queue_create("com.apple.khsoftwareupdatecontroller.context", 0LL);
    contextQueue = v2->_contextQueue;
    v2->_contextQueue = (OS_dispatch_queue *)v5;
    objc_release(contextQueue);
    v7 = objc_retainAutoreleasedReturnValue(+[NSMapTable strongToStrongObjectsMapTable](&OBJC_CLASS___NSMapTable, "strongToStrongObjectsMapTable"));
    contextsForController = v2->_contextsForController;
    v2->_contextsForController = v7;
    objc_release(contextsForController);
    v9 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
    enqueuedSoftwareUpdateControllers = v2->_enqueuedSoftwareUpdateControllers;
    v2->_enqueuedSoftwareUpdateControllers = v9;
    objc_release(enqueuedSoftwareUpdateControllers);
  }
  return v2;
}