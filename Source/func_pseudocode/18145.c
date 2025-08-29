_DADiskUnmount
void __cdecl DADiskUnmount(DADiskRef disk, DADiskUnmountOptions options, DADiskUnmountCallback callback, void *context)
{
  _DADiskUnmount(disk, options, callback, context);
}