-[TSUZipFileDescriptorWrapper endAccess]
void __cdecl -[TSUZipFileDescriptorWrapper endAccess](TSUZipFileDescriptorWrapper *self, SEL a2)
{
  dispatch_group_leave((dispatch_group_t)self->_accessGroup);
}