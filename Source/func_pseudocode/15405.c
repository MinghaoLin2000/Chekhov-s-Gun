-[UARPUpdaterDisplayControllerDelegate restoreDevice:withOptions:]
void __cdecl -[UARPUpdaterDisplayControllerDelegate restoreDevice:withOptions:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        __AMRestorableDevice *a3,
        __CFDictionary *a4)
{
  dispatch_queue_global_s *v7; // x22
  _QWORD block[7]; // [xsp+8h] [xbp-58h] BYREF

  v7 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100010698;
  block[3] = &unk_1000208E0;
  block[5] = a3;
  block[6] = a4;
  block[4] = self;
  dispatch_async(v7, block);
  objc_release(v7);
}