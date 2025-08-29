-[IPXLibraryChooserService stop]
void __cdecl -[IPXLibraryChooserService stop](IPXLibraryChooserService *self, SEL a2)
{
  _QWORD block[5]; // [xsp+8h] [xbp-28h] BYREF

  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10000225C;
  block[3] = &unk_1000041B0;
  block[4] = self;
  dispatch_sync(&_dispatch_main_q, block);
}