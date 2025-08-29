-[TSUZipFileDescriptorWrapper beginAccess]
void __cdecl -[TSUZipFileDescriptorWrapper beginAccess](TSUZipFileDescriptorWrapper *self, SEL a2)
{
  dispatch_group_enter((dispatch_group_t)self->_accessGroup);
}