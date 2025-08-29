-[TSUZipFileDescriptorWrapper waitForAccessToEnd]
void __cdecl -[TSUZipFileDescriptorWrapper waitForAccessToEnd](TSUZipFileDescriptorWrapper *self, SEL a2)
{
  dispatch_group_wait((dispatch_group_t)self->_accessGroup, 0xFFFFFFFFFFFFFFFFLL);
}